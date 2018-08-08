
# Windows development

## msys2

    mingw32$ winpty cargo run

    mingw32$ winpty cargo test


## prg compile


    harbour -gc3 -Id:/devel/harbour/include -n f.prg

Dodati -b ako zelimo debug


## rust

~/cargo/config

    [build]
    rustflags = ["-C", "prefer-dynamic"]


## c using rust dylib dll

create rust dylib fibonacci.dll

    $ cargo build --release ; cp target/release/fibonacci.dll .

<pre>
   Compiling cc v1.0.18
   Compiling fibonacci v0.2.0 (file:///D:/devel/fibonacci)
warning: foreign function is never used: `hello_harbour`
  --> src\lib.rs:84:5
   |
84 |     fn hello_harbour();
   |     ^^^^^^^^^^^^^^^^^^^
   |
   = note: #[warn(dead_code)] on by default

    Finished release [optimized] target(s) in 12.97s
</pre>

build c.exe

    $ gcc -L . -l fibonacci -o fibo_c.exe cli_fib_c.c

Run c.exe

    $ winpty ./fibio_c.exe



## debug notes

The procedure entry point __divmoddi4 could not be located in the dynamic link library
*libgcc_s_dw2-1.dll was out of date* in rust toolchain


    hernad@DESKTOP-0HRJEDF mingw32 /c/Users/hernad/.rustup
    $ ls -l /c/Users/hernad/.rustup/toolchains/stable-i686-pc-windows-gnu/bin/libgcc_s_dw2-1.dll
    -rwxr-xr-x 1 hernad hernad 114190 Mar 30  2017
    
     $ ls -l /c/msys64/mingw32/bin/libgcc_s_dw2-1.dll                       
    -rwxr-xr-x 1 hernad hernad 121460 Apr 25 12:36 /c/msys64/mingw32/bin/libgcc_s_dw2-1.dll
    

rustup bin (/c/Users/hernad/.rustup/toolchains/stable-i686-pc-windows-gnu/bin/) zamijeniti sa mingw32 (/c/msys64/mingw32/bin/):

* libgcc_s_dw2-1.dll
* libstdc++-6.dll
* libwinpthread-1.dll


### cargo test

<pre>
hernad@DESKTOP-0HRJEDF mingw32 /d/devel/fibonacci
$ winpty cargo test
    Finished dev [unoptimized + debuginfo] target(s) in 0.04s
     Running target\debug\deps\fibonacci-61b1b0569a9ff7db.exe

running 5 tests
hb_vmInit, default GT WIN
test one ... ok
test t4 ... ok
test three ... ok
test two ... ok

poziv F1=          4
poziv F1B=          8
poziv f1d_rust          6.00
dbf test
[]
[]
-
[Hello world!]
[Harbour power]
[This is a test for field MEMO1.]
[This is a test for field MEMO2.]
[  120.14]
[      90]


Append 50 records with memos...
Records before ZAP:         52
Size of files (data and memo):       3950      26880
Records after ZAP:          0
Size of files (data and memo):        259       1024
Value of fields MEMO1, MEMO2, DOUBLE and NUMERIC:
[]
[]
[    0.00]
[       0]
Adding a record          1
Adding a record          2
Adding a record          3
Deleting record          3
Adding a record          4
Adding a record          5
Adding a record          6
Adding a record          7
Deleting record          7
Adding a record          8
Adding a record          9
Adding a record         10

With SET DELETED OFF
         1 numeric=        1
         2 numeric=        2
         3 numeric=        3
         4 numeric=        4
         5 numeric=        5
         6 numeric=        6
         7 numeric=        7
         8 numeric=        8
         9 numeric=        9
        10 numeric=       10

With SET DELETED ON
         1 numeric/2=        1
         2 numeric/2=        2
         4 numeric/2=        4
         5 numeric/2=        5
         6 numeric/2=        6
         8 numeric/2=        8
         9 numeric/2=        9
        10 numeric/2=       10

With SET DELETED ON
and  SET FILTER TO MYALIAS->NUMERIC > 2 .AND. MYALIAS->NUMERIC < 8
       4
       5
       6

With SET DELETED OFF
and  SET FILTER TO MYALIAS->NUMERIC > 2 .AND. MYALIAS->NUMERIC < 8
         3 numeric/3        3
         4 numeric/3        4
         5 numeric/3        5
         6 numeric/3        6
         7 numeric/3        7
dbFilter() => MYALIAS->NUMERIC > 2 .AND. MYALIAS->NUMERIC < 8

Testing __dbPack()
Records before PACK:         10
Records after PACK:          8
Value of fields:
         1 numeric/4        1 memo 1
         2 numeric/4        2 memo 2
         3 numeric/4        4 memo 4
         4 numeric/4        5 memo 5
         5 numeric/4        6 memo 6
         6 numeric/4        8 memo 8
         7 numeric/4        9 memo 9
         8 numeric/4       10 memo 10
test hb_works ... ok

test result: ok. 5 passed; 0 failed; 0 ignored; 0 measured; 0 filtered out

     Running target\debug\deps\fibonacci_bin-27bf9b30fed8965b.exe

running 0 tests

test result: ok. 0 passed; 0 failed; 0 ignored; 0 measured; 0 filtered out
</pre>


## ming32 envar

source this script:

    $ cat ~/set_path_envars.sh

<pre>
#!/bin/bash

export MSYSTEM=mingw32
export USER=hernad

export PATH=/c/msys64/$MSYSTEM/bin:/c/msys64/usr/bin:$PATH


export PATH=/c/Users/$USER/.cargo/bin:$PATH
export PATH=/c/Users/$USER/.rustup/toolchains/stable-i686-pc-windows-gnu/bin:$PATH

export PATH=/d/devel/harbour/bin:$PATH


export HB_ARCHITECTURE=win
export HB_COMPILER=mingw
export MINGW_INCLUDE=C:\\\\msys64\\\\$MSYSTEM\\\\include

export HB_WITH_CURL=${MINGW_INCLUDE}
export HB_WITH_OPENSSL=${MINGW_INCLUDE}
export HB_WITH_PGSQL=${MINGW_INCLUDE}
export HB_WITH_ICU=${MINGW_INCLUDE}

export HB_INSTALL_PREFIX=d:/devel/harbour
</pre>


install packages before harbour build:

    $ cat ~/install_packages.sh

<pre>
#!/bin/bash

MSYS2_ARCH=i686
pacman --noconfirm -S --needed mingw-w64-$MSYS2_ARCH-postgresql mingw-w64-$MSYS2_ARCH-icu mingw-w64-$MSYS2_ARCH-curl mingw-w64-$MSYS2_ARCH-openssl

pacman --noconfirm -S mingw-w64-$MSYS2_ARCH-postgresql
</pre>

