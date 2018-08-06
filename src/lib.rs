#[test]
fn it_works() {}


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


#[no_mangle]
pub extern fn fibonacci(n: i32) -> i32 {
    unsafe {
       hello_harbour();
    }
    match n {
        0 => 0,
        1 => 1,
        _ => fibonacci(n - 1) + fibonacci(n - 2)

    }
}

extern {
    fn hello_harbour();
}

fn main() {
    println!("f10 = {}", fibonacci(10));
}

