extern crate cc;

fn main() {
    // https://kornel.ski/rust-sys-crate
    // https://fossies.org/linux/pngquant/rust/build.rs

    let mut cc = cc::Build::new();
    cc.warnings(true);

    if cfg!(feature = "foo") {
        cc.define("FOO_SUPPORTED", Some("1"));
    }
    if cfg!(feature = "bar") {
        cc.define("BAR_SUPPORTED", Some("1"));
    }

    cc.file("src/c_lib.c");
    cc.file("src/f.c");
    cc.file("src/cli_fib_prg.c");

    //cc.define("CFLAGS", Some("-m32 -Wl,--no-demangle -Wl,--nxcompat -Wl,--dynamicbase -Wl,--pic-executable,-e,_mainCRTStartup -mconsole"));
    //cc.define("CFLAGS", Some("-m32"));
    //cc.shared_flag(true);

    if cfg!(target_os = "linux") {
        cc.include("/home/hernad/harbour/include");
    } else {
        cc.include("d:/devel/harbour/include");
    }

    cc.compile("libchello.a");

    //.shared_flag(true)
    //    .compile("libfoo.so");

    //.cpp_link_stdlib("stdc++")
    //   .compile("libfoo.so");

    //gcc.exe C:/msys64/tmp/hbmk_udgv0n.dir/test_proc.o
    //C:/msys64/tmp/hbmk_udgv0n.dir/hbmk_gw2153.o
    // -m32
    // -Wl,--no-demangle -Wl,--nxcompat -Wl,--dynamicbase -Wl,--pic-executable,-e,_mainCRTStartup -mconsole
    //-Wl,--start-group -lhbextern -lhbdebug -lhbvm -lhbrtl -lhblang -lhbcpage -lgtcgi -lgtstd -lgtpca -lgtwin -lgtwvt -lgtgui -lhbrdd -lhbuddall -lhbusrrdd -lrddntx -lrddcdx -lrddnsx -lrddfpt -lhbrdd -lhbhsx -lhbsix -lhbmacro -lhbcplr -lhbpp -lhbcommon -lhbmainstd -lkernel32 -luser32 -lgdi32 -ladvapi32 -lws2_32 -liphlpapi -lwinspool -lcomctl32 -lcomdlg32 -lshell32 -luuid -lole32 -loleaut32 -lmpr -lwinmm -lmapi32 -limm32 -lmsimg32 -lwininet -lhbpcre -lhbzlib   -Wl,--end-group -otest_proc.exe  -LD:/devel/harbour/lib/win/mingw

    // -lkernel32 -luser32 -lgdi32 -ladvapi32 -lws2_32 -liphlpapi
    // -lwinspool -lcomctl32 -lcomdlg32 -lshell32 -luuid -lole32
    // -loleaut32 -lmpr -lwinmm -lmapi32 -limm32
    // -lmsimg32 -lwininet -lhbpcre -lhbzlib

    //println!("cargo:rustc-link-lib=static=hbvm");
    //println!("cargo:rustc-link-lib=static=hbrtl");

    // DLL  -lhbmainstd -lhbcplr -lhbdebug

    if cfg!(target_os = "windows") {
        println!("cargo:rustc-link-lib=dylib=hbcplr");
        println!("cargo:rustc-link-lib=dylib=hbdebug");

        println!("cargo:rustc-link-lib=dylib=iphlpapi");
        println!("cargo:rustc-link-lib=dylib=kernel32");
        println!("cargo:rustc-link-lib=dylib=user32");
        println!("cargo:rustc-link-lib=dylib=gdi32");
        println!("cargo:rustc-link-lib=dylib=advapi32");
        println!("cargo:rustc-link-lib=dylib=ws2_32");
        println!("cargo:rustc-link-lib=dylib=winspool");
        println!("cargo:rustc-link-lib=dylib=comctl32");
        println!("cargo:rustc-link-lib=dylib=comdlg32");
        println!("cargo:rustc-link-lib=dylib=shell32");
        println!("cargo:rustc-link-lib=dylib=uuid");
        println!("cargo:rustc-link-lib=dylib=ole32");
        println!("cargo:rustc-link-lib=dylib=oleaut32");
        println!("cargo:rustc-link-lib=dylib=winmm");

        // harbour_dll MORA BITI NA KRAJU!
        println!("cargo:rustc-link-lib=dylib=harbour_dll");
        println!("cargo:rustc-link-search=native=d:/devel/harbour/lib/win/mingw");
    }


    if cfg!(target_os = "linux") {
        //println!("cargo:rustc-link-lib=static=hbcplr");
        //println!("cargo:rustc-link-lib=static=hbdebug");

        println!("cargo:rustc-link-lib=dylib=pq");
        

        // harbour_dll MORA BITI NA KRAJU!
        println!("cargo:rustc-link-lib=dylib=harbour");
        println!("cargo:rustc-link-search=native=/home/hernad/harbour/lib");
        //println!("cargo:rustc-link-search=native=/usr/lib64");
    }
}
