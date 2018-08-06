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
cc.define("CFLAGS", Some("-m32"));
cc.include("d:/devel/harbour/include");
cc.compile("libchello.a");

}