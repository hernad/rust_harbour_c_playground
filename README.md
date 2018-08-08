
# Windows development

## msys2

    mingw32$ winpty cargo run

    mingw32$ winpty cargo test


## prg compile


    harbour -gc3 -Id:/devel/harbour/include -n f.prg

Dodati -b ako zelimo debug


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


