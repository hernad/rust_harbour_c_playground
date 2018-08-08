//extern crate libc;

#[test]
fn hb_works() {
   hb_run_main_from_rust();
}


#[test]
fn one() {
    assert_eq!(0, fibonacci(0));
}

#[test]
fn two() {
    assert_eq!(1, fibonacci(1));
}

#[test]
fn three() {
    assert_eq!(1, fibonacci(2));
}

#[test]
fn t4() {
    assert_eq!(2, fibonacci(3));
}

// https://dev.to/living_syn/calling-rust-from-c-6hk

#[repr(C)]
pub struct SampleStruct {    
    pub field_one: i16,
    pub field_two: i32,
}

#[no_mangle]
pub extern fn get_simple_struct() -> SampleStruct {
    SampleStruct {
        field_one: 1,
        field_two: 2
    }
}

#[no_mangle]
pub extern fn fibonacci(n: i32) -> i32 {
    //unsafe {
    //   hello_harbour();
    //}
    match n {
        0 => 0,
        1 => 1,
        _ => fibonacci(n - 1) + fibonacci(n - 2)

    }
}

#[no_mangle]
pub extern fn hb_run_main_from_rust() {
   unsafe {
       hb_init();
       HB_FUN_MAIN();
   }

}


#[no_mangle]
pub extern fn HB_FUN_F1D_RUST() {
    unsafe {
      hb_f1d();
    }
}

#[no_mangle]
pub extern fn hb_init() {
    unsafe {
      hb_init_c();
    }
}

extern {
    fn hb_f1d();
    fn hello_harbour();
    fn HB_FUN_MAIN();
    fn hb_init_c();
}
