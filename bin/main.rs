//https://github.com/shepmaster/sxd-document/blob/master/Cargo.toml

extern crate fibonacci;

use fibonacci::{fibonacci, hb_run_main_from_rust};

fn main() {
    println!("f10 = {}", fibonacci(10));
    hb_run_main_from_rust();
}
