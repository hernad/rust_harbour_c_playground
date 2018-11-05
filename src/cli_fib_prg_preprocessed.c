# 1 "src/cli_fib_prg.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "src/cli_fib_prg.c"






# 1 "/home/hernad/harbour/include/hbvmpub.h" 1
# 50 "/home/hernad/harbour/include/hbvmpub.h"
# 1 "/home/hernad/harbour/include/hbdefs.h" 1
# 50 "/home/hernad/harbour/include/hbdefs.h"
# 1 "/usr/lib/gcc/x86_64-redhat-linux/8/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-redhat-linux/8/include/stdarg.h" 3 4

# 40 "/usr/lib/gcc/x86_64-redhat-linux/8/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 99 "/usr/lib/gcc/x86_64-redhat-linux/8/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 51 "/home/hernad/harbour/include/hbdefs.h" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/libc-header-start.h" 1 3 4
# 33 "/usr/include/bits/libc-header-start.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 428 "/usr/include/features.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 427 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 428 "/usr/include/sys/cdefs.h" 2 3 4
# 1 "/usr/include/bits/long-double.h" 1 3 4
# 429 "/usr/include/sys/cdefs.h" 2 3 4
# 429 "/usr/include/features.h" 2 3 4
# 452 "/usr/include/features.h" 3 4
# 1 "/usr/include/gnu/stubs.h" 1 3 4
# 10 "/usr/include/gnu/stubs.h" 3 4
# 1 "/usr/include/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/gnu/stubs.h" 2 3 4
# 453 "/usr/include/features.h" 2 3 4
# 34 "/usr/include/bits/libc-header-start.h" 2 3 4
# 28 "/usr/include/stdio.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-redhat-linux/8/include/stddef.h" 1 3 4
# 216 "/usr/lib/gcc/x86_64-redhat-linux/8/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 34 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/bits/types.h" 1 3 4
# 27 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 28 "/usr/include/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;







typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
# 130 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/typesizes.h" 1 3 4
# 131 "/usr/include/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;




typedef int __sig_atomic_t;
# 36 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/bits/types/__FILE.h" 1 3 4



struct _IO_FILE;
typedef struct _IO_FILE __FILE;
# 37 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/bits/types/FILE.h" 1 3 4



struct _IO_FILE;


typedef struct _IO_FILE FILE;
# 38 "/usr/include/stdio.h" 2 3 4



# 1 "/usr/include/bits/libio.h" 1 3 4
# 35 "/usr/include/bits/libio.h" 3 4
# 1 "/usr/include/bits/_G_config.h" 1 3 4
# 19 "/usr/include/bits/_G_config.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/8/include/stddef.h" 1 3 4
# 20 "/usr/include/bits/_G_config.h" 2 3 4

# 1 "/usr/include/bits/types/__mbstate_t.h" 1 3 4
# 13 "/usr/include/bits/types/__mbstate_t.h" 3 4
typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
# 22 "/usr/include/bits/_G_config.h" 2 3 4




typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 36 "/usr/include/bits/libio.h" 2 3 4
# 149 "/usr/include/bits/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;




typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 177 "/usr/include/bits/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 245 "/usr/include/bits/libio.h" 3 4
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
# 293 "/usr/include/bits/libio.h" 3 4
  __off64_t _offset;







  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;

  size_t __pad5;
  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 337 "/usr/include/bits/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
# 389 "/usr/include/bits/libio.h" 3 4
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 433 "/usr/include/bits/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 462 "/usr/include/bits/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 42 "/usr/include/stdio.h" 2 3 4
# 57 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;
# 71 "/usr/include/stdio.h" 3 4
typedef __ssize_t ssize_t;






typedef _G_fpos_t fpos_t;
# 131 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio_lim.h" 1 3 4
# 132 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;






extern int remove (const char *__filename) __attribute__ ((__nothrow__ , __leaf__));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ , __leaf__));



extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ , __leaf__));







extern FILE *tmpfile (void) ;
# 173 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;




extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;
# 190 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;







extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);
# 213 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 232 "/usr/include/stdio.h" 3 4
extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 265 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__)) ;
# 278 "/usr/include/stdio.h" 3 4
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__)) ;





extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));




extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));







extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));



extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));
# 365 "/usr/include/stdio.h" 3 4
extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));







extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));
# 395 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__))

                      ;
# 420 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
# 443 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
# 477 "/usr/include/stdio.h" 3 4
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);
# 495 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 506 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);
# 517 "/usr/include/stdio.h" 3 4
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);
# 537 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);







extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;
# 603 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;







extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);
# 673 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);







extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);
# 707 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 731 "/usr/include/stdio.h" 3 4
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 757 "/usr/include/stdio.h" 3 4
extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;



extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;







extern void perror (const char *__s);





# 1 "/usr/include/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];
# 782 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
# 800 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));
# 840 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
# 868 "/usr/include/stdio.h" 3 4

# 52 "/home/hernad/harbour/include/hbdefs.h" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 25 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/bits/libc-header-start.h" 1 3 4
# 26 "/usr/include/stdlib.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-redhat-linux/8/include/stddef.h" 1 3 4
# 328 "/usr/lib/gcc/x86_64-redhat-linux/8/include/stddef.h" 3 4
typedef int wchar_t;
# 32 "/usr/include/stdlib.h" 2 3 4







# 1 "/usr/include/bits/waitflags.h" 1 3 4
# 40 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/bits/waitstatus.h" 1 3 4
# 41 "/usr/include/stdlib.h" 2 3 4
# 55 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/bits/floatn.h" 1 3 4
# 119 "/usr/include/bits/floatn.h" 3 4
# 1 "/usr/include/bits/floatn-common.h" 1 3 4
# 24 "/usr/include/bits/floatn-common.h" 3 4
# 1 "/usr/include/bits/long-double.h" 1 3 4
# 25 "/usr/include/bits/floatn-common.h" 2 3 4
# 120 "/usr/include/bits/floatn.h" 2 3 4
# 56 "/usr/include/stdlib.h" 2 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;





__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;
# 97 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ , __leaf__)) ;



extern double atof (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;



__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;



extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 176 "/usr/include/stdlib.h" 3 4
extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 385 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__ , __leaf__)) ;


extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




# 1 "/usr/include/sys/types.h" 1 3 4
# 27 "/usr/include/sys/types.h" 3 4






typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
# 60 "/usr/include/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;
# 98 "/usr/include/sys/types.h" 3 4
typedef __pid_t pid_t;





typedef __id_t id_t;
# 115 "/usr/include/sys/types.h" 3 4
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;




# 1 "/usr/include/bits/types/clock_t.h" 1 3 4






typedef __clock_t clock_t;
# 128 "/usr/include/sys/types.h" 2 3 4

# 1 "/usr/include/bits/types/clockid_t.h" 1 3 4






typedef __clockid_t clockid_t;
# 130 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/bits/types/time_t.h" 1 3 4






typedef __time_t time_t;
# 131 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/bits/types/timer_t.h" 1 3 4






typedef __timer_t timer_t;
# 132 "/usr/include/sys/types.h" 2 3 4
# 145 "/usr/include/sys/types.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/8/include/stddef.h" 1 3 4
# 146 "/usr/include/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;




# 1 "/usr/include/bits/stdint-intn.h" 1 3 4
# 24 "/usr/include/bits/stdint-intn.h" 3 4
typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
# 157 "/usr/include/sys/types.h" 2 3 4
# 178 "/usr/include/sys/types.h" 3 4
typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 194 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 2 3 4
# 60 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/byteswap.h" 1 3 4
# 28 "/usr/include/bits/byteswap.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/bits/byteswap.h" 2 3 4






# 1 "/usr/include/bits/byteswap-16.h" 1 3 4
# 36 "/usr/include/bits/byteswap.h" 2 3 4
# 44 "/usr/include/bits/byteswap.h" 3 4
static __inline unsigned int
__bswap_32 (unsigned int __bsx)
{
  return __builtin_bswap32 (__bsx);
}
# 108 "/usr/include/bits/byteswap.h" 3 4
static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{
  return __builtin_bswap64 (__bsx);
}
# 61 "/usr/include/endian.h" 2 3 4
# 1 "/usr/include/bits/uintn-identity.h" 1 3 4
# 32 "/usr/include/bits/uintn-identity.h" 3 4
static __inline __uint16_t
__uint16_identity (__uint16_t __x)
{
  return __x;
}

static __inline __uint32_t
__uint32_identity (__uint32_t __x)
{
  return __x;
}

static __inline __uint64_t
__uint64_identity (__uint64_t __x)
{
  return __x;
}
# 62 "/usr/include/endian.h" 2 3 4
# 195 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/select.h" 1 3 4
# 30 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/bits/select.h" 1 3 4
# 22 "/usr/include/bits/select.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 23 "/usr/include/bits/select.h" 2 3 4
# 31 "/usr/include/sys/select.h" 2 3 4


# 1 "/usr/include/bits/types/sigset_t.h" 1 3 4



# 1 "/usr/include/bits/types/__sigset_t.h" 1 3 4




typedef struct
{
  unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
} __sigset_t;
# 5 "/usr/include/bits/types/sigset_t.h" 2 3 4


typedef __sigset_t sigset_t;
# 34 "/usr/include/sys/select.h" 2 3 4



# 1 "/usr/include/bits/types/struct_timeval.h" 1 3 4







struct timeval
{
  __time_t tv_sec;
  __suseconds_t tv_usec;
};
# 38 "/usr/include/sys/select.h" 2 3 4

# 1 "/usr/include/bits/types/struct_timespec.h" 1 3 4
# 9 "/usr/include/bits/types/struct_timespec.h" 3 4
struct timespec
{
  __time_t tv_sec;
  __syscall_slong_t tv_nsec;
};
# 40 "/usr/include/sys/select.h" 2 3 4



typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
# 59 "/usr/include/sys/select.h" 3 4
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;
# 91 "/usr/include/sys/select.h" 3 4

# 101 "/usr/include/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 113 "/usr/include/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
# 126 "/usr/include/sys/select.h" 3 4

# 198 "/usr/include/sys/types.h" 2 3 4







# 1 "/usr/include/sys/sysmacros.h" 1 3 4
# 41 "/usr/include/sys/sysmacros.h" 3 4
# 1 "/usr/include/bits/sysmacros.h" 1 3 4
# 42 "/usr/include/sys/sysmacros.h" 2 3 4
# 71 "/usr/include/sys/sysmacros.h" 3 4


extern unsigned int gnu_dev_major (__dev_t __dev) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern unsigned int gnu_dev_minor (__dev_t __dev) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern __dev_t gnu_dev_makedev (unsigned int __major, unsigned int __minor) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 85 "/usr/include/sys/sysmacros.h" 3 4

# 206 "/usr/include/sys/types.h" 2 3 4






typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 254 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/bits/pthreadtypes.h" 1 3 4
# 23 "/usr/include/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/bits/thread-shared-types.h" 1 3 4
# 77 "/usr/include/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/bits/pthreadtypes-arch.h" 1 3 4
# 21 "/usr/include/bits/pthreadtypes-arch.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 22 "/usr/include/bits/pthreadtypes-arch.h" 2 3 4
# 65 "/usr/include/bits/pthreadtypes-arch.h" 3 4
struct __pthread_rwlock_arch_t
{
  unsigned int __readers;
  unsigned int __writers;
  unsigned int __wrphase_futex;
  unsigned int __writers_futex;
  unsigned int __pad3;
  unsigned int __pad4;

  int __cur_writer;
  int __shared;
  signed char __rwelision;




  unsigned char __pad1[7];


  unsigned long int __pad2;


  unsigned int __flags;
# 99 "/usr/include/bits/pthreadtypes-arch.h" 3 4
};
# 78 "/usr/include/bits/thread-shared-types.h" 2 3 4




typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
# 118 "/usr/include/bits/thread-shared-types.h" 3 4
struct __pthread_mutex_s
{
  int __lock ;
  unsigned int __count;
  int __owner;

  unsigned int __nusers;



  int __kind;
 




  short __spins; short __elision;
  __pthread_list_t __list;
# 145 "/usr/include/bits/thread-shared-types.h" 3 4
 
};




struct __pthread_cond_s
{
  __extension__ union
  {
    __extension__ unsigned long long int __wseq;
    struct
    {
      unsigned int __low;
      unsigned int __high;
    } __wseq32;
  };
  __extension__ union
  {
    __extension__ unsigned long long int __g1_start;
    struct
    {
      unsigned int __low;
      unsigned int __high;
    } __g1_start32;
  };
  unsigned int __g_refs[2] ;
  unsigned int __g_size[2];
  unsigned int __g1_orig_size;
  unsigned int __wrefs;
  unsigned int __g_signals[2];
};
# 24 "/usr/include/bits/pthreadtypes.h" 2 3 4



typedef unsigned long int pthread_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;




typedef union
{
  struct __pthread_mutex_s __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;


typedef union
{
  struct __pthread_cond_s __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;





typedef union
{
  struct __pthread_rwlock_arch_t __data;
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 255 "/usr/include/sys/types.h" 2 3 4



# 395 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) __attribute__ ((__nothrow__ , __leaf__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern int rand (void) __attribute__ ((__nothrow__ , __leaf__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));



extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__ , __leaf__));







extern double drand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__ , __leaf__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern void *malloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;






extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));
# 563 "/usr/include/stdlib.h" 3 4
extern void free (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));


# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/8/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__ , __leaf__));






# 567 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;




extern void *aligned_alloc (size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (2))) ;



extern void abort (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int at_quick_exit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern void exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));





extern void quick_exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));





extern void _Exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));




extern char *getenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 644 "/usr/include/stdlib.h" 3 4
extern int putenv (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__ , __leaf__));
# 672 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 685 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 707 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 728 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 781 "/usr/include/stdlib.h" 3 4
extern int system (const char *__command) ;
# 797 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ , __leaf__)) ;






typedef int (*__compar_fn_t) (const void *, const void *);
# 817 "/usr/include/stdlib.h" 3 4
extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
# 837 "/usr/include/stdlib.h" 3 4
extern int abs (int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;


__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;






extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;


__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
# 869 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));





extern int mblen (const char *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__ , __leaf__));



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__));







extern int rpmatch (const char *__response) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 954 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3))) ;
# 1000 "/usr/include/stdlib.h" 3 4
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 1010 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/bits/stdlib-float.h" 1 3 4
# 1011 "/usr/include/stdlib.h" 2 3 4
# 1020 "/usr/include/stdlib.h" 3 4

# 53 "/home/hernad/harbour/include/hbdefs.h" 2
# 1 "/usr/include/string.h" 1 3 4
# 26 "/usr/include/string.h" 3 4
# 1 "/usr/include/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/string.h" 2 3 4






# 1 "/usr/lib/gcc/x86_64-redhat-linux/8/include/stddef.h" 1 3 4
# 34 "/usr/include/string.h" 2 3 4
# 42 "/usr/include/string.h" 3 4
extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 90 "/usr/include/string.h" 3 4
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 121 "/usr/include/string.h" 3 4
extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



# 1 "/usr/include/bits/types/locale_t.h" 1 3 4
# 22 "/usr/include/bits/types/locale_t.h" 3 4
# 1 "/usr/include/bits/types/__locale_t.h" 1 3 4
# 28 "/usr/include/bits/types/__locale_t.h" 3 4
struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
};

typedef struct __locale_struct *__locale_t;
# 23 "/usr/include/bits/types/locale_t.h" 2 3 4

typedef __locale_t locale_t;
# 153 "/usr/include/string.h" 2 3 4


extern int strcoll_l (const char *__s1, const char *__s2, locale_t __l)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));


extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    locale_t __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));





extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 225 "/usr/include/string.h" 3 4
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 252 "/usr/include/string.h" 3 4
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 272 "/usr/include/string.h" 3 4
extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 302 "/usr/include/string.h" 3 4
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 329 "/usr/include/string.h" 3 4
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 384 "/usr/include/string.h" 3 4
extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__));
# 409 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__ , __leaf__))

                        __attribute__ ((__nonnull__ (2)));
# 427 "/usr/include/string.h" 3 4
extern char *strerror_l (int __errnum, locale_t __l) __attribute__ ((__nothrow__ , __leaf__));



# 1 "/usr/include/strings.h" 1 3 4
# 23 "/usr/include/strings.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/8/include/stddef.h" 1 3 4
# 24 "/usr/include/strings.h" 2 3 4










extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bcopy (const void *__src, void *__dest, size_t __n)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 68 "/usr/include/strings.h" 3 4
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 96 "/usr/include/strings.h" 3 4
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));






extern int ffs (int __i) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int ffsl (long int __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__ extern int ffsll (long long int __ll)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));






extern int strcasecmp_l (const char *__s1, const char *__s2, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));



extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));



# 432 "/usr/include/string.h" 2 3 4



extern void explicit_bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 498 "/usr/include/string.h" 3 4

# 54 "/home/hernad/harbour/include/hbdefs.h" 2
# 1 "/usr/lib/gcc/x86_64-redhat-linux/8/include/limits.h" 1 3 4
# 34 "/usr/lib/gcc/x86_64-redhat-linux/8/include/limits.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/8/include/syslimits.h" 1 3 4






# 1 "/usr/lib/gcc/x86_64-redhat-linux/8/include/limits.h" 1 3 4
# 194 "/usr/lib/gcc/x86_64-redhat-linux/8/include/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 26 "/usr/include/limits.h" 3 4
# 1 "/usr/include/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/limits.h" 2 3 4
# 183 "/usr/include/limits.h" 3 4
# 1 "/usr/include/bits/posix1_lim.h" 1 3 4
# 160 "/usr/include/bits/posix1_lim.h" 3 4
# 1 "/usr/include/bits/local_lim.h" 1 3 4
# 38 "/usr/include/bits/local_lim.h" 3 4
# 1 "/usr/include/linux/limits.h" 1 3 4
# 39 "/usr/include/bits/local_lim.h" 2 3 4
# 161 "/usr/include/bits/posix1_lim.h" 2 3 4
# 184 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/bits/posix2_lim.h" 1 3 4
# 188 "/usr/include/limits.h" 2 3 4
# 195 "/usr/lib/gcc/x86_64-redhat-linux/8/include/limits.h" 2 3 4
# 8 "/usr/lib/gcc/x86_64-redhat-linux/8/include/syslimits.h" 2 3 4
# 35 "/usr/lib/gcc/x86_64-redhat-linux/8/include/limits.h" 2 3 4
# 55 "/home/hernad/harbour/include/hbdefs.h" 2

# 1 "/home/hernad/harbour/include/hbsetup.h" 1
# 54 "/home/hernad/harbour/include/hbsetup.h"
# 1 "/home/hernad/harbour/include/hbsetup.ch" 1
# 55 "/home/hernad/harbour/include/hbsetup.h" 2
# 57 "/home/hernad/harbour/include/hbdefs.h" 2
# 1 "/home/hernad/harbour/include/hbver.h" 1
# 58 "/home/hernad/harbour/include/hbdefs.h" 2
# 73 "/home/hernad/harbour/include/hbdefs.h"
# 1 "/usr/lib/gcc/x86_64-redhat-linux/8/include/stdint.h" 1 3 4
# 9 "/usr/lib/gcc/x86_64-redhat-linux/8/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 26 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/stdint.h" 2 3 4

# 1 "/usr/include/bits/wchar.h" 1 3 4
# 29 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 30 "/usr/include/stdint.h" 2 3 4







# 1 "/usr/include/bits/stdint-uintn.h" 1 3 4
# 24 "/usr/include/bits/stdint-uintn.h" 3 4
typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;
# 38 "/usr/include/stdint.h" 2 3 4





typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;

typedef long int int_least64_t;






typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;

typedef unsigned long int uint_least64_t;
# 68 "/usr/include/stdint.h" 3 4
typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
# 81 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 97 "/usr/include/stdint.h" 3 4
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
# 111 "/usr/include/stdint.h" 3 4
typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;
# 10 "/usr/lib/gcc/x86_64-redhat-linux/8/include/stdint.h" 2 3 4
# 74 "/home/hernad/harbour/include/hbdefs.h" 2
# 154 "/home/hernad/harbour/include/hbdefs.h"
      
# 154 "/home/hernad/harbour/include/hbdefs.h"
     typedef signed long long HB_LONGLONG;
      typedef unsigned long long HB_ULONGLONG;
# 198 "/home/hernad/harbour/include/hbdefs.h"
typedef int HB_BOOL;
typedef signed char HB_SCHAR;
typedef unsigned char HB_UCHAR;
typedef short HB_SHORT;
typedef unsigned short HB_USHORT;
typedef long HB_LONG;
typedef unsigned long HB_ULONG;
typedef int HB_INT;
typedef unsigned int HB_UINT;
# 221 "/home/hernad/harbour/include/hbdefs.h"
      typedef HB_ULONG HB_SIZE;

   typedef HB_LONG HB_ISIZ;
   typedef HB_ULONG HB_USIZ;
# 233 "/home/hernad/harbour/include/hbdefs.h"
typedef HB_UCHAR HB_BYTE;


typedef HB_SCHAR HB_I8;
typedef HB_UCHAR HB_U8;



   typedef signed short int HB_I16;
   typedef unsigned short int HB_U16;
# 265 "/home/hernad/harbour/include/hbdefs.h"
   typedef signed int HB_I32;
   typedef unsigned int HB_U32;
# 311 "/home/hernad/harbour/include/hbdefs.h"
   typedef signed long HB_I64;
   typedef unsigned long HB_U64;
# 420 "/home/hernad/harbour/include/hbdefs.h"
   typedef long double HB_MAXDBL;
# 451 "/home/hernad/harbour/include/hbdefs.h"
   typedef long HB_MAXINT;
   typedef unsigned long HB_MAXUINT;



typedef HB_MAXINT HB_VMMAXINT;
typedef HB_MAXUINT HB_VMMAXUINT;
# 549 "/home/hernad/harbour/include/hbdefs.h"
typedef HB_U32 HB_TYPE;


typedef HB_U32 HB_FATTR;






   typedef unsigned long HB_COUNTER;
# 572 "/home/hernad/harbour/include/hbdefs.h"
   typedef long HB_PTRDIFF;
   typedef unsigned long HB_PTRUINT;




   typedef HB_LONG HB_FOFFSET;
# 590 "/home/hernad/harbour/include/hbdefs.h"
   typedef int HB_FHANDLE;
   typedef int HB_NHANDLE;
# 613 "/home/hernad/harbour/include/hbdefs.h"
   typedef unsigned short HB_WCHAR;
# 837 "/home/hernad/harbour/include/hbdefs.h"
   typedef union
   {
      void * val;

      HB_BYTE buf[ 8 ];



   } HB_PTRCAST, * PHB_PTRCAST;

   typedef union
   {
      HB_U16 val;
      HB_BYTE buf[ 2 ];
   } HB_U16CAST, * PHB_U16CAST;

   typedef union
   {
      HB_U32 val;
      HB_BYTE buf[ 4 ];
   } HB_U32CAST, * PHB_U32CAST;


   typedef union
   {
      HB_U64 val;
      HB_BYTE buf[ 8 ];
   } HB_U64CAST, * PHB_U64CAST;


   typedef union
   {
      double val;
      HB_BYTE buf[ 8 ];


      HB_U64 i64;

   } HB_DBLCAST, * PHB_DBLCAST;

   static __inline__ __attribute__((always_inline)) void * _hb_get_ptr( const HB_BYTE * buf )
   {
      HB_PTRCAST u;
      memcpy( u.buf, buf, sizeof( void * ) );
      return u.val;
   }

   static __inline__ __attribute__((always_inline)) void _hb_put_ptr( HB_BYTE * buf, void * val )
   {
      HB_PTRCAST u;
      u.val = val;
      memcpy( buf, u.buf, sizeof( void * ) );
   }

   static __inline__ __attribute__((always_inline)) HB_U16 _hb_get_std_uint16( const HB_BYTE * buf )
   {
      HB_U16CAST u;
      memcpy( u.buf, buf, sizeof( u.buf ) );
      return u.val;
   }

   static __inline__ __attribute__((always_inline)) void _hb_put_std_uint16( HB_BYTE * buf, HB_U16 val )
   {
      HB_U16CAST u;
      u.val = val;
      memcpy( buf, u.buf, sizeof( u.buf ) );
   }

   static __inline__ __attribute__((always_inline)) HB_U16 _hb_get_rev_uint16( const HB_BYTE * buf )
   {
      HB_U16CAST u;
      u.buf[ 0 ] = buf[ 1 ];
      u.buf[ 1 ] = buf[ 0 ];
      return u.val;
   }

   static __inline__ __attribute__((always_inline)) void _hb_put_rev_uint16( HB_BYTE * buf, HB_U16 val )
   {
      HB_U16CAST u;
      u.val = val;
      buf[ 0 ] = u.buf[ 1 ];
      buf[ 1 ] = u.buf[ 0 ];
   }

   static __inline__ __attribute__((always_inline)) HB_U32 _hb_get_std_uint32( const HB_BYTE * buf )
   {
      HB_U32CAST u;
      memcpy( u.buf, buf, sizeof( u.buf ) );
      return u.val;
   }

   static __inline__ __attribute__((always_inline)) void _hb_put_std_uint32( HB_BYTE * buf, HB_U32 val )
   {
      HB_U32CAST u;
      u.val = val;
      memcpy( buf, u.buf, sizeof( u.buf ) );
   }

   static __inline__ __attribute__((always_inline)) HB_U32 _hb_get_rev_uint32( const HB_BYTE * buf )
   {
      HB_U32CAST u;

      memcpy( u.buf, buf, sizeof( u.buf ) );
      return __builtin_bswap32( u.val );







   }

   static __inline__ __attribute__((always_inline)) void _hb_put_rev_uint32( HB_BYTE * buf, HB_U32 val )
   {
      HB_U32CAST u;

      u.val = __builtin_bswap32( val );
      memcpy( buf, u.buf, sizeof( u.buf ) );







   }


      static __inline__ __attribute__((always_inline)) HB_U64 _hb_get_std_uint64( const HB_BYTE * buf )
      {
         HB_U64CAST u;
         memcpy( u.buf, buf, sizeof( u.buf ) );
         return u.val;
      }

      static __inline__ __attribute__((always_inline)) void _hb_put_std_uint64( HB_BYTE * buf, HB_U64 val )
      {
         HB_U64CAST u;
         u.val = val;
         memcpy( buf, u.buf, sizeof( u.buf ) );
      }

      static __inline__ __attribute__((always_inline)) HB_U64 _hb_get_rev_uint64( const HB_BYTE * buf )
      {
         HB_U64CAST u;

         memcpy( u.buf, buf, sizeof( u.buf ) );
         return __builtin_bswap64( u.val );
# 997 "/home/hernad/harbour/include/hbdefs.h"
      }

      static __inline__ __attribute__((always_inline)) void _hb_put_rev_uint64( HB_BYTE * buf, HB_U64 val )
      {
         HB_U64CAST u;

         u.val = __builtin_bswap64( val );
         memcpy( buf, u.buf, sizeof( u.buf ) );
# 1016 "/home/hernad/harbour/include/hbdefs.h"
      }


   static __inline__ __attribute__((always_inline)) double _hb_get_std_double( const HB_BYTE * buf )
   {
      HB_DBLCAST u;
      memcpy( u.buf, buf, sizeof( u.buf ) );
      return u.val;
   }

   static __inline__ __attribute__((always_inline)) void _hb_put_std_double( HB_BYTE * buf, double val )
   {
      HB_DBLCAST u;
      u.val = val;
      memcpy( buf, u.buf, sizeof( u.buf ) );
   }

   static __inline__ __attribute__((always_inline)) double _hb_get_rev_double( const HB_BYTE * buf )
   {
      HB_DBLCAST u;


      memcpy( u.buf, buf, sizeof( u.buf ) );
      u.i64 = __builtin_bswap64( u.i64 );
      return u.val;
# 1052 "/home/hernad/harbour/include/hbdefs.h"
   }

   static __inline__ __attribute__((always_inline)) void _hb_put_rev_double( HB_BYTE * buf, double val )
   {
      HB_DBLCAST u;


      u.val = val;
      u.i64 = __builtin_bswap64( u.i64 );
      memcpy( buf, u.buf, sizeof( u.buf ) );
# 1073 "/home/hernad/harbour/include/hbdefs.h"
   }
# 1620 "/home/hernad/harbour/include/hbdefs.h"

   typedef void ( * PHB_FUNC )( void );


typedef HB_SHORT HB_SYMBOLSCOPE;

typedef unsigned char HB_ATTR;
typedef int HB_COLOR;
# 1667 "/home/hernad/harbour/include/hbdefs.h"
# 1 "/home/hernad/harbour/include/hbtrace.h" 1
# 52 "/home/hernad/harbour/include/hbtrace.h"

# 206 "/home/hernad/harbour/include/hbtrace.h"
typedef struct
{
   const char * file;
   const char * proc;
   int line;
   int level;
}
HB_TRACEINFO, * PHB_TRACEINFO;

extern int hb_tracestate( int new_state );
extern int hb_tracelevel( int new_level );
extern int hb_traceflush( int new_flush );
extern int hb_tracesysout( int new_sysout );
extern const char * hb_tracemode( const char * szNewMode );
extern HB_BOOL hb_tracefile( const char * szFile );

extern void hb_tracelog( int level, const char * file, int line, const char * proc, const char * fmt, ... ) __attribute__ (( format (printf, 5, 6)));

extern void hb_traceset( int level, const char * file, int line, const char * proc );
extern PHB_TRACEINFO hb_traceinfo( void );

extern int hb_tr_level( void );
extern void hb_tr_trace( const char * fmt, ... ) __attribute__ (( format (printf, 1, 2)));
extern void hb_tr_stealth( const char * fmt, ... ) __attribute__ (( format (printf, 1, 2)));


# 1668 "/home/hernad/harbour/include/hbdefs.h" 2
# 51 "/home/hernad/harbour/include/hbvmpub.h" 2







# 173 "/home/hernad/harbour/include/hbvmpub.h"
   typedef void * PHB_ITEM;
   typedef void * PHB_CODEBLOCK;
   typedef void * PHB_PCODEFUNC;

   typedef void HB_STACK;
# 193 "/home/hernad/harbour/include/hbvmpub.h"
   typedef void * PHB_DYNS;





typedef struct _HB_SYMB
{
   const char * szName;
   union
   {
      HB_SYMBOLSCOPE value;
      void * pointer;
   } scope;
   union
   {
      PHB_FUNC pFunPtr;
      PHB_PCODEFUNC pCodeFunc;
      void * pStaticsBase;
   } value;
   PHB_DYNS pDynSym;
} HB_SYMB, * PHB_SYMB;


typedef HB_BOOL ( * PHB_DYNS_FUNC )( PHB_DYNS pDynSymbol, void * Cargo );


typedef void ( * PHB_CARGO_FUNC )( void *cargo );

typedef void * ( * PHB_ALLOCUPDT_FUNC )( void *, int );

typedef void ( * HB_INIT_FUNC )( void * );

typedef struct _HB_FUNC_LIST
{
   HB_INIT_FUNC pFunc;
   void * cargo;
   void * hDynLib;
   struct _HB_FUNC_LIST * pNext;
} HB_FUNC_LIST, * PHB_FUNC_LIST;
# 251 "/home/hernad/harbour/include/hbvmpub.h"
extern void hb_vmExecute( const HB_BYTE * pCode, PHB_SYMB pSymbols ) __attribute__ (( flatten ));


# 8 "src/cli_fib_prg.c" 2
# 1 "/home/hernad/harbour/include/hbpcode.h" 1
# 63 "/home/hernad/harbour/include/hbpcode.h"
typedef enum
{
   HB_P_AND = 0,
   HB_P_ARRAYPUSH,
   HB_P_ARRAYPOP,
   HB_P_ARRAYDIM,
   HB_P_ARRAYGEN,
   HB_P_EQUAL,
   HB_P_ENDBLOCK,
   HB_P_ENDPROC,
   HB_P_EXACTLYEQUAL,
   HB_P_FALSE,
   HB_P_FORTEST,
   HB_P_FUNCTION,
   HB_P_FUNCTIONSHORT,
   HB_P_FRAME,
   HB_P_FUNCPTR,
   HB_P_GREATER,
   HB_P_GREATEREQUAL,
   HB_P_DEC,
   HB_P_DIVIDE,
   HB_P_DO,
   HB_P_DOSHORT,
   HB_P_DUPLICATE,
   HB_P_PUSHTIMESTAMP,
   HB_P_INC,
   HB_P_INSTRING,
   HB_P_JUMPNEAR,
   HB_P_JUMP,
   HB_P_JUMPFAR,
   HB_P_JUMPFALSENEAR,
   HB_P_JUMPFALSE,
   HB_P_JUMPFALSEFAR,
   HB_P_JUMPTRUENEAR,
   HB_P_JUMPTRUE,
   HB_P_JUMPTRUEFAR,
   HB_P_LESSEQUAL,
   HB_P_LESS,
   HB_P_LINE,
   HB_P_LOCALNAME,
   HB_P_MACROPOP,
   HB_P_MACROPOPALIASED,
   HB_P_MACROPUSH,
   HB_P_MACROARRAYGEN,
   HB_P_MACROPUSHLIST,
   HB_P_MACROPUSHINDEX,
   HB_P_MACROPUSHPARE,
   HB_P_MACROPUSHALIASED,
   HB_P_MACROSYMBOL,
   HB_P_MACROTEXT,
   HB_P_MESSAGE,
   HB_P_MINUS,
   HB_P_MODULUS,
   HB_P_MODULENAME,

   HB_P_MMESSAGE,
   HB_P_MPOPALIASEDFIELD,
   HB_P_MPOPALIASEDVAR,
   HB_P_MPOPFIELD,
   HB_P_MPOPMEMVAR,
   HB_P_MPUSHALIASEDFIELD,
   HB_P_MPUSHALIASEDVAR,
   HB_P_MPUSHBLOCK,
   HB_P_MPUSHFIELD,
   HB_P_MPUSHMEMVAR,
   HB_P_MPUSHMEMVARREF,
   HB_P_MPUSHSYM,
   HB_P_MPUSHVARIABLE,

   HB_P_MULT,
   HB_P_NEGATE,
   HB_P_NOOP,
   HB_P_NOT,
   HB_P_NOTEQUAL,
   HB_P_OR,
   HB_P_PARAMETER,
   HB_P_PLUS,
   HB_P_POP,
   HB_P_POPALIAS,
   HB_P_POPALIASEDFIELD,
   HB_P_POPALIASEDFIELDNEAR,
   HB_P_POPALIASEDVAR,
   HB_P_POPFIELD,
   HB_P_POPLOCAL,
   HB_P_POPLOCALNEAR,
   HB_P_POPMEMVAR,
   HB_P_POPSTATIC,
   HB_P_POPVARIABLE,
   HB_P_POWER,
   HB_P_PUSHALIAS,
   HB_P_PUSHALIASEDFIELD,
   HB_P_PUSHALIASEDFIELDNEAR,
   HB_P_PUSHALIASEDVAR,
   HB_P_PUSHBLOCK,
   HB_P_PUSHBLOCKSHORT,
   HB_P_PUSHFIELD,
   HB_P_PUSHBYTE,
   HB_P_PUSHINT,
   HB_P_PUSHLOCAL,
   HB_P_PUSHLOCALNEAR,
   HB_P_PUSHLOCALREF,
   HB_P_PUSHLONG,
   HB_P_PUSHMEMVAR,
   HB_P_PUSHMEMVARREF,
   HB_P_PUSHNIL,
   HB_P_PUSHDOUBLE,
   HB_P_PUSHSELF,
   HB_P_PUSHSTATIC,
   HB_P_PUSHSTATICREF,
   HB_P_PUSHSTR,
   HB_P_PUSHSTRSHORT,
   HB_P_PUSHSYM,
   HB_P_PUSHSYMNEAR,
   HB_P_PUSHVARIABLE,
   HB_P_RETVALUE,
   HB_P_SEND,
   HB_P_SENDSHORT,
   HB_P_SEQBEGIN,
   HB_P_SEQEND,
   HB_P_SEQRECOVER,
   HB_P_SFRAME,
   HB_P_STATICS,
   HB_P_STATICNAME,
   HB_P_SWAPALIAS,
   HB_P_TRUE,
   HB_P_ZERO,
   HB_P_ONE,
   HB_P_MACROFUNC,
   HB_P_MACRODO,
   HB_P_MPUSHSTR,
   HB_P_LOCALNEARADDINT,
   HB_P_MACROPUSHREF,
   HB_P_PUSHLONGLONG,
   HB_P_ENUMSTART,
   HB_P_ENUMNEXT,
   HB_P_ENUMPREV,
   HB_P_ENUMEND,
   HB_P_SWITCH,
   HB_P_PUSHDATE,

   HB_P_PLUSEQPOP,
   HB_P_MINUSEQPOP,
   HB_P_MULTEQPOP,
   HB_P_DIVEQPOP,
   HB_P_PLUSEQ,
   HB_P_MINUSEQ,
   HB_P_MULTEQ,
   HB_P_DIVEQ,
   HB_P_WITHOBJECTSTART,
   HB_P_WITHOBJECTMESSAGE,
   HB_P_WITHOBJECTEND,
   HB_P_MACROSEND,
   HB_P_PUSHOVARREF,
   HB_P_ARRAYPUSHREF,
   HB_P_VFRAME,
   HB_P_LARGEFRAME,
   HB_P_LARGEVFRAME,
   HB_P_PUSHSTRHIDDEN,
   HB_P_LOCALADDINT,
   HB_P_MODEQPOP,
   HB_P_EXPEQPOP,
   HB_P_MODEQ,
   HB_P_EXPEQ,
   HB_P_DUPLUNREF,
   HB_P_MPUSHBLOCKLARGE,
   HB_P_MPUSHSTRLARGE,
   HB_P_PUSHBLOCKLARGE,
   HB_P_PUSHSTRLARGE,
   HB_P_SWAP,
   HB_P_PUSHVPARAMS,
   HB_P_PUSHUNREF,
   HB_P_SEQALWAYS,
   HB_P_ALWAYSBEGIN,
   HB_P_ALWAYSEND,
   HB_P_DECEQPOP,
   HB_P_INCEQPOP,
   HB_P_DECEQ,
   HB_P_INCEQ,
   HB_P_LOCALDEC,
   HB_P_LOCALINC,
   HB_P_LOCALINCPUSH,
   HB_P_PUSHFUNCSYM,
   HB_P_HASHGEN,
   HB_P_SEQBLOCK,
   HB_P_THREADSTATICS,
   HB_P_PUSHAPARAMS,
   HB_P_LAST_PCODE
} HB_PCODE;
# 9 "src/cli_fib_prg.c" 2
# 1 "/home/hernad/harbour/include/hbinit.h" 1
# 52 "/home/hernad/harbour/include/hbinit.h"


extern PHB_SYMB hb_vmProcessSymbols( PHB_SYMB pSymbols, HB_USHORT uiSymbols, const char * szModuleName, HB_ULONG ulID, HB_USHORT uiPcodeVer );
# 321 "/home/hernad/harbour/include/hbinit.h"

# 10 "src/cli_fib_prg.c" 2
# 1 "/home/hernad/harbour/include/hbxvm.h" 1
# 50 "/home/hernad/harbour/include/hbxvm.h"
# 1 "/home/hernad/harbour/include/hbapi.h" 1
# 55 "/home/hernad/harbour/include/hbapi.h"
# 1 "/home/hernad/harbour/include/hbvmpub.h" 1
# 56 "/home/hernad/harbour/include/hbapi.h" 2


# 478 "/home/hernad/harbour/include/hbapi.h"
typedef unsigned int HB_ERRCODE;
# 488 "/home/hernad/harbour/include/hbapi.h"
extern void hb_xinit( void );
extern void hb_xexit( void );
extern void * hb_xalloc( HB_SIZE nSize );
extern void * hb_xgrab( HB_SIZE nSize ) __attribute__ (( malloc )) __attribute__ (( alloc_size (1)));
extern void hb_xfree( void * pMem );
extern void * hb_xrealloc( void * pMem, HB_SIZE nSize ) __attribute__ (( alloc_size (2)));
extern HB_SIZE hb_xsize( void * pMem );
extern const char * hb_xinfo( void * pMem, int * piLine );
extern HB_SIZE hb_xquery( int iMode );
extern HB_BOOL hb_xtraced( void );
extern void hb_xsetfilename( const char * szValue );
extern void hb_xsetinfo( const char * szValue );
# 564 "/home/hernad/harbour/include/hbapi.h"
typedef unsigned long HB_VMHANDLE;

extern HB_VMHANDLE hb_xvalloc( HB_SIZE nSize, HB_USHORT nFlags );
extern void hb_xvfree( HB_VMHANDLE h );
extern HB_VMHANDLE hb_xvrealloc( HB_VMHANDLE h, HB_SIZE nSize, HB_USHORT nFlags );
extern void * hb_xvlock( HB_VMHANDLE h );
extern void hb_xvunlock( HB_VMHANDLE h );
extern void * hb_xvwire( HB_VMHANDLE h );
extern void hb_xvunwire( HB_VMHANDLE h );
extern HB_SIZE hb_xvlockcount( HB_VMHANDLE h );
extern HB_SIZE hb_xvsize( HB_VMHANDLE h );
extern HB_VMHANDLE hb_xvheapnew( HB_SIZE nSize );
extern void hb_xvheapdestroy( HB_VMHANDLE h );
extern HB_VMHANDLE hb_xvheapresize( HB_VMHANDLE h, HB_SIZE nSize );
extern HB_SIZE hb_xvheapalloc( HB_VMHANDLE h, HB_SIZE nSize );
extern void hb_xvheapfree( HB_VMHANDLE h, HB_SIZE nOffset );
extern void * hb_xvheaplock( HB_VMHANDLE h, HB_SIZE nOffset );
extern void hb_xvheapunlock( HB_VMHANDLE h, HB_SIZE nOffset );



typedef void ( * PHB_GARBAGE_FUNC )( void * Cargo );

typedef struct
{
   PHB_GARBAGE_FUNC clear;
   PHB_GARBAGE_FUNC mark;
} HB_GC_FUNCS;

extern void * hb_gcAllocate( HB_SIZE nSize, const HB_GC_FUNCS * pFuncs );
extern void hb_gcFree( void * pAlloc );
extern void * hb_gcLock( void * pAlloc );
extern void * hb_gcUnlock( void * pAlloc );
extern void hb_gcMark( void * pAlloc );
extern void hb_gcRefInc( void * pAlloc );
extern void hb_gcRefFree( void * pAlloc );

extern void hb_gcDummyClear( void * Cargo );
extern void hb_gcDummyMark( void * Cargo );

extern PHB_ITEM hb_gcGripGet( PHB_ITEM pItem );
extern void hb_gcGripDrop( PHB_ITEM pItem );
# 626 "/home/hernad/harbour/include/hbapi.h"
extern void hb_gcCollect( void );
extern void hb_gcCollectAll( HB_BOOL fForce );


extern HB_ULONG hb_parinfo( int iParam );
extern HB_SIZE hb_parinfa( int iParamNum, HB_SIZE nArrayIndex );
extern PHB_ITEM hb_param( int iParam, long lMask );
extern PHB_ITEM hb_paramError( int iParam );
extern HB_BOOL hb_extIsNil( int iParam );
extern HB_BOOL hb_extIsArray( int iParam );
extern HB_BOOL hb_extIsObject( int iParam );

extern const char * hb_parc( int iParam );
extern const char * hb_parcx( int iParam );
extern HB_SIZE hb_parclen( int iParam );
extern HB_SIZE hb_parcsiz( int iParam );
extern const char * hb_pards( int iParam );
extern char * hb_pardsbuff( char * szDate, int iParam );
extern long hb_pardl( int iParam );
extern double hb_partd( int iParam );
extern HB_BOOL hb_partdt( long * plJulian, long * plMilliSec , int iParam );
extern int hb_parl( int iParam );
extern int hb_parldef( int iParam, int iDefValue );
extern double hb_parnd( int iParam );
extern int hb_parni( int iParam );
extern int hb_parnidef( int iParam, int iDefValue );
extern long hb_parnl( int iParam );
extern long hb_parnldef( int iParam, long lDefValue );
extern HB_ISIZ hb_parns( int iParam );
extern HB_ISIZ hb_parnsdef( int iParam, HB_ISIZ nDefValue );
extern HB_MAXINT hb_parnint( int iParam );
extern HB_MAXINT hb_parnintdef( int iParam, HB_MAXINT nDefValue );
extern void * hb_parptr( int iParam );
extern void * hb_parptrGC( const HB_GC_FUNCS * pFuncs, int iParam );

extern HB_LONGLONG hb_parnll( int iParam );


extern const char * hb_parvc( int iParam, ... );
extern const char * hb_parvcx( int iParam, ... );
extern HB_SIZE hb_parvclen( int iParam, ... );
extern HB_SIZE hb_parvcsiz( int iParam, ... );
extern const char * hb_parvds( int iParam, ... );
extern char * hb_parvdsbuff( char * szDate, int iParam, ... );
extern long hb_parvdl( int iParam, ... );
extern double hb_parvtd( int iParam, ... );
extern HB_BOOL hb_parvtdt( long * plJulian, long * plMilliSec , int iParam, ... );
extern int hb_parvl( int iParam, ... );
extern double hb_parvnd( int iParam, ... );
extern int hb_parvni( int iParam, ... );
extern long hb_parvnl( int iParam, ... );
extern HB_ISIZ hb_parvns( int iParam, ... );
extern HB_MAXINT hb_parvnint( int iParam, ... );
extern void * hb_parvptr( int iParam, ... );
extern void * hb_parvptrGC( const HB_GC_FUNCS * pFuncs, int iParam, ... );

extern HB_LONGLONG hb_parvnll( int iParam, ... );


extern int hb_pcount( void );
extern void hb_ret( void );
extern void hb_retc( const char * szText );
extern void hb_retc_null( void );
extern void hb_retc_buffer( char * szText );
extern void hb_retc_const( const char * szText );
extern void hb_retclen( const char * szText, HB_SIZE nLen );
extern void hb_retclen_buffer( char * szText, HB_SIZE nLen );
extern void hb_retclen_const( const char * szText, HB_SIZE nLen );
extern void hb_retds( const char * szDate );
extern void hb_retd( int iYear, int iMonth, int iDay );
extern void hb_retdl( long lJulian );
extern void hb_rettd( double dTimeStamp );
extern void hb_rettdt( long lJulian, long lMilliSec );
extern void hb_retl( int iTrueFalse );
extern void hb_retnd( double dNumber );
extern void hb_retni( int iNumber );
extern void hb_retnl( long lNumber );
extern void hb_retns( HB_ISIZ nNumber );
extern void hb_retnint( HB_MAXINT nNumber );
extern void hb_retnlen( double dNumber, int iWidth, int iDec );
extern void hb_retndlen( double dNumber, int iWidth, int iDec );
extern void hb_retnilen( int iNumber, int iWidth );
extern void hb_retnllen( long lNumber, int iWidth );
extern void hb_retnintlen( HB_MAXINT nNumber, int iWidth );
extern void hb_reta( HB_SIZE nLen );
extern void hb_retptr( void * ptr );
extern void hb_retptrGC( void * ptr );

extern void hb_retnll( HB_LONGLONG lNumber );
extern void hb_retnlllen( HB_LONGLONG lNumber, int iWidth );
# 757 "/home/hernad/harbour/include/hbapi.h"
extern int hb_stor( int iParam );
extern int hb_storc( const char * szText, int iParam );
extern int hb_storclen( const char * szText, HB_SIZE nLength, int iParam );
extern int hb_storclen_buffer( char * szText, HB_SIZE nLength, int iParam );
extern int hb_stords( const char * szDate, int iParam );
extern int hb_stordl( long lJulian, int iParam );
extern int hb_stortd( double dTimeStamp, int iParam );
extern int hb_stortdt( long lJulian, long lMilliSec, int iParam );
extern int hb_storl( int iLogical, int iParam );
extern int hb_storni( int iValue, int iParam );
extern int hb_stornl( long lValue, int iParam );
extern int hb_storns( HB_ISIZ nValue, int iParam );
extern int hb_stornd( double dValue, int iParam );
extern int hb_stornint( HB_MAXINT nValue, int iParam );
extern int hb_storptr( void * pointer, int iParam );
extern int hb_storptrGC( void * pointer, int iParam );

extern int hb_stornll( HB_LONGLONG llValue, int iParam );


extern int hb_storvc( const char * szText, int iParam, ... );
extern int hb_storvclen( const char * szText, HB_SIZE nLength, int iParam, ... );
extern int hb_storvclen_buffer( char * szText, HB_SIZE nLength, int iParam, ... );
extern int hb_storvds( const char * szDate, int iParam, ... );
extern int hb_storvdl( long lJulian, int iParam, ... );
extern int hb_storvtd( double dTimeStamp, int iParam, ... );
extern int hb_storvtdt( long lJulian, long lMilliSec, int iParam, ... );
extern int hb_storvl( int iLogical, int iParam, ... );
extern int hb_storvni( int iValue, int iParam, ... );
extern int hb_storvnl( long lValue, int iParam, ... );
extern int hb_storvns( HB_ISIZ nValue, int iParam, ... );
extern int hb_storvnd( double dValue, int iParam, ... );
extern int hb_storvnint( HB_MAXINT nValue, int iParam, ... );
extern int hb_storvptr( void * pointer, int iParam, ... );
extern int hb_storvptrGC( void * pointer, int iParam, ... );

extern int hb_storvnll( HB_LONGLONG llValue, int iParam, ... );



extern HB_BOOL hb_arrayNew( PHB_ITEM pItem, HB_SIZE nLen );
extern HB_SIZE hb_arrayLen( PHB_ITEM pArray );
extern HB_BOOL hb_arrayIsObject( PHB_ITEM pArray );
extern void * hb_arrayId( PHB_ITEM pArray );
extern PHB_ITEM hb_arrayFromId( PHB_ITEM pItem, void * pArrayId );
extern HB_BOOL hb_arrayAdd( PHB_ITEM pArray, PHB_ITEM pItemValue );
extern HB_BOOL hb_arrayAddForward( PHB_ITEM pArray, PHB_ITEM pValue );
extern HB_BOOL hb_arrayIns( PHB_ITEM pArray, HB_SIZE nIndex );
extern HB_BOOL hb_arrayDel( PHB_ITEM pArray, HB_SIZE nIndex );
extern HB_BOOL hb_arraySize( PHB_ITEM pArray, HB_SIZE nLen );
extern HB_BOOL hb_arrayLast( PHB_ITEM pArray, PHB_ITEM pResult );
extern HB_BOOL hb_arrayGet( PHB_ITEM pArray, HB_SIZE nIndex, PHB_ITEM pItem );
extern HB_BOOL hb_arrayGetItemRef( PHB_ITEM pArray, HB_SIZE nIndex, PHB_ITEM pItem );

extern PHB_ITEM hb_arrayGetItemPtr( PHB_ITEM pArray, HB_SIZE nIndex );
extern HB_SIZE hb_arrayCopyC( PHB_ITEM pArray, HB_SIZE nIndex, char * szBuffer, HB_SIZE nLen );
extern char * hb_arrayGetC( PHB_ITEM pArray, HB_SIZE nIndex );
extern const char * hb_arrayGetCPtr( PHB_ITEM pArray, HB_SIZE nIndex );
extern HB_SIZE hb_arrayGetCLen( PHB_ITEM pArray, HB_SIZE nIndex );
extern void * hb_arrayGetPtr( PHB_ITEM pArray, HB_SIZE nIndex );
extern void * hb_arrayGetPtrGC( PHB_ITEM pArray, HB_SIZE nIndex, const HB_GC_FUNCS * pFuncs );
extern PHB_SYMB hb_arrayGetSymbol( PHB_ITEM pArray, HB_SIZE nIndex );
extern HB_BOOL hb_arrayGetL( PHB_ITEM pArray, HB_SIZE nIndex );
extern int hb_arrayGetNI( PHB_ITEM pArray, HB_SIZE nIndex );
extern long hb_arrayGetNL( PHB_ITEM pArray, HB_SIZE nIndex );
extern HB_ISIZ hb_arrayGetNS( PHB_ITEM pArray, HB_SIZE nIndex );
extern HB_MAXINT hb_arrayGetNInt( PHB_ITEM pArray, HB_SIZE nIndex );
extern double hb_arrayGetND( PHB_ITEM pArray, HB_SIZE nIndex );
extern char * hb_arrayGetDS( PHB_ITEM pArray, HB_SIZE nIndex, char * szDate );
extern long hb_arrayGetDL( PHB_ITEM pArray, HB_SIZE nIndex );
extern double hb_arrayGetTD( PHB_ITEM pArray, HB_SIZE nIndex );
extern HB_BOOL hb_arrayGetTDT( PHB_ITEM pArray, HB_SIZE nIndex, long * plJulian, long * plMilliSec );
extern HB_TYPE hb_arrayGetType( PHB_ITEM pArray, HB_SIZE nIndex );
extern HB_BOOL hb_arraySet( PHB_ITEM pArray, HB_SIZE nIndex, PHB_ITEM pItem );
extern HB_BOOL hb_arraySetForward( PHB_ITEM pArray, HB_SIZE nIndex, PHB_ITEM pItem );
extern HB_BOOL hb_arraySetDS( PHB_ITEM pArray, HB_SIZE nIndex, const char * szDate );
extern HB_BOOL hb_arraySetDL( PHB_ITEM pArray, HB_SIZE nIndex, long lDate );
extern HB_BOOL hb_arraySetTD( PHB_ITEM pArray, HB_SIZE nIndex, double dTimeStamp );
extern HB_BOOL hb_arraySetTDT( PHB_ITEM pArray, HB_SIZE nIndex, long lJulian, long lMilliSec );
extern HB_BOOL hb_arraySetL( PHB_ITEM pArray, HB_SIZE nIndex, HB_BOOL fValue );
extern HB_BOOL hb_arraySetNI( PHB_ITEM pArray, HB_SIZE nIndex, int iNumber );
extern HB_BOOL hb_arraySetNL( PHB_ITEM pArray, HB_SIZE nIndex, long lNumber );
extern HB_BOOL hb_arraySetNS( PHB_ITEM pArray, HB_SIZE nIndex, HB_ISIZ nNumber );

extern HB_BOOL hb_arraySetNLL( PHB_ITEM pArray, HB_SIZE nIndex, HB_LONGLONG llNumber );

extern HB_BOOL hb_arraySetNInt( PHB_ITEM pArray, HB_SIZE nIndex, HB_MAXINT nNumber );
extern HB_BOOL hb_arraySetND( PHB_ITEM pArray, HB_SIZE nIndex, double dNumber );
extern HB_BOOL hb_arraySetC( PHB_ITEM pArray, HB_SIZE nIndex, const char * szText );
extern HB_BOOL hb_arraySetCL( PHB_ITEM pArray, HB_SIZE nIndex, const char * szText, HB_SIZE nLen );
extern HB_BOOL hb_arraySetCPtr( PHB_ITEM pArray, HB_SIZE nIndex, char * szText );
extern HB_BOOL hb_arraySetCLPtr( PHB_ITEM pArray, HB_SIZE nIndex, char * szText, HB_SIZE nLen );
extern HB_BOOL hb_arraySetCConst( PHB_ITEM pArray, HB_SIZE nIndex, const char * szText );
extern HB_BOOL hb_arraySetPtr( PHB_ITEM pArray, HB_SIZE nIndex, void * pValue );
extern HB_BOOL hb_arraySetPtrGC( PHB_ITEM pArray, HB_SIZE nIndex, void * pValue );
extern HB_BOOL hb_arraySetSymbol( PHB_ITEM pArray, HB_SIZE nIndex, PHB_SYMB pSymbol );
extern HB_BOOL hb_arrayFill( PHB_ITEM pArray, PHB_ITEM pValue, HB_SIZE * pnStart, HB_SIZE * pnCount );
extern HB_SIZE hb_arrayScanCase( PHB_ITEM pArray, PHB_ITEM pValue, HB_SIZE * pnStart, HB_SIZE * pnCount, HB_BOOL fExact, HB_BOOL fMatchCase );
extern HB_SIZE hb_arrayRevScan( PHB_ITEM pArray, PHB_ITEM pValue, HB_SIZE * pnStart, HB_SIZE * pnCount, HB_BOOL fExact );
extern HB_BOOL hb_arrayEval( PHB_ITEM pArray, PHB_ITEM bBlock, HB_SIZE * pnStart, HB_SIZE * pnCount );
extern HB_BOOL hb_arrayCopy( PHB_ITEM pSrcArray, PHB_ITEM pDstArray, HB_SIZE * pnStart, HB_SIZE * pnCount, HB_SIZE * pnTarget );
extern PHB_ITEM hb_arrayClone( PHB_ITEM pArray );
extern PHB_ITEM hb_arrayCloneTo( PHB_ITEM pDest, PHB_ITEM pArray );
extern HB_BOOL hb_arraySort( PHB_ITEM pArray, HB_SIZE * pnStart, HB_SIZE * pnCount, PHB_ITEM pBlock );
extern PHB_ITEM hb_arrayFromStack( HB_USHORT uiLen );
extern PHB_ITEM hb_arrayFromParams( int iLevel );
extern PHB_ITEM hb_arrayBaseParams( void );
extern PHB_ITEM hb_arraySelfParams( void );

extern HB_LONGLONG hb_arrayGetNLL( PHB_ITEM pArray, HB_SIZE nIndex );
# 882 "/home/hernad/harbour/include/hbapi.h"
extern PHB_ITEM hb_hashNew( PHB_ITEM pItem );
extern HB_SIZE hb_hashLen( PHB_ITEM pHash );
extern HB_BOOL hb_hashDel( PHB_ITEM pHash, PHB_ITEM pKey );
extern HB_BOOL hb_hashAdd( PHB_ITEM pHash, PHB_ITEM pKey, PHB_ITEM pValue );
extern HB_BOOL hb_hashAddNew( PHB_ITEM pHash, PHB_ITEM pKey, PHB_ITEM pValue );
extern HB_BOOL hb_hashRemove( PHB_ITEM pHash, PHB_ITEM pItem );
extern HB_BOOL hb_hashClear( PHB_ITEM pHash );
extern HB_BOOL hb_hashAllocNewPair( PHB_ITEM pHash, PHB_ITEM * pKeyPtr, PHB_ITEM * pValPtr );
extern void hb_hashSort( PHB_ITEM pHash );
extern PHB_ITEM hb_hashClone( PHB_ITEM pHash );
extern PHB_ITEM hb_hashCloneTo( PHB_ITEM pDest, PHB_ITEM pHash );
extern void hb_hashJoin( PHB_ITEM pDest, PHB_ITEM pSource, int iType );
extern HB_BOOL hb_hashScan( PHB_ITEM pHash, PHB_ITEM pKey, HB_SIZE * pnPos );
extern HB_BOOL hb_hashScanSoft( PHB_ITEM pHash, PHB_ITEM pKey, HB_SIZE * pnPos );
extern void hb_hashPreallocate( PHB_ITEM pHash, HB_SIZE nNewSize );
extern PHB_ITEM hb_hashGetKeys( PHB_ITEM pHash );
extern PHB_ITEM hb_hashGetValues( PHB_ITEM pHash );
extern void hb_hashSetDefault( PHB_ITEM pHash, PHB_ITEM pValue );
extern PHB_ITEM hb_hashGetDefault( PHB_ITEM pHash );
extern void hb_hashSetFlags( PHB_ITEM pHash, int iFlags );
extern void hb_hashClearFlags( PHB_ITEM pHash, int iFlags );
extern int hb_hashGetFlags( PHB_ITEM pHash );
extern void * hb_hashId( PHB_ITEM pHash );


extern PHB_ITEM hb_hashGetItemPtr( PHB_ITEM pHash, PHB_ITEM pKey, int iFlags );
extern PHB_ITEM hb_hashGetItemRefPtr( PHB_ITEM pHash, PHB_ITEM pKey );
extern PHB_ITEM hb_hashGetCItemPtr( PHB_ITEM pHash, const char * pszKey );
extern HB_SIZE hb_hashGetCItemPos( PHB_ITEM pHash, const char * pszKey );
extern PHB_ITEM hb_hashGetKeyAt( PHB_ITEM pHash, HB_SIZE nPos );
extern PHB_ITEM hb_hashGetValueAt( PHB_ITEM pHash, HB_SIZE nPos );

extern HB_BOOL hb_hashDelAt( PHB_ITEM pHash, HB_SIZE nPos );
# 941 "/home/hernad/harbour/include/hbapi.h"
extern const char * const hb_szAscii[ 256 ];

extern int hb_stricmp( const char * s1, const char * s2 );
extern int hb_strnicmp( const char * s1, const char * s2, HB_SIZE nLen );
extern char * hb_strupr( char * pszText );
extern char * hb_strlow( char * pszText );
extern char * hb_strdup( const char * pszText );
extern char * hb_strndup( const char * pszText, HB_SIZE nLen );
extern char * hb_strduptrim( const char * pszText );
extern HB_SIZE hb_strlentrim( const char * pszText );
extern HB_SIZE hb_strnlen( const char * pszText, HB_SIZE nLen );
extern char * hb_xstrcat( char * dest, const char * src, ... );
extern char * hb_xstrcpy( char * szDest, const char * szSrc, ... );
extern HB_BOOL hb_compStrToNum( const char * szNum, HB_SIZE nLen, HB_MAXINT * pnVal, double * pdVal, int * piDec, int * piWidth );
extern HB_BOOL hb_valStrnToNum( const char * szNum, HB_SIZE nLen, HB_MAXINT * pnVal, double * pdVal, int * piDec, int * piWidth );
extern HB_BOOL hb_strToNum( const char * szNum, HB_MAXINT * pnVal, double * pdVal );
extern HB_BOOL hb_strnToNum( const char * szNum, HB_SIZE nLen, HB_MAXINT * pnVal, double * pdVal );
extern int hb_snprintf( char * buffer, size_t bufsize, const char * format, ... ) __attribute__ (( format (printf, 3, 4)));
extern int hb_vsnprintf( char * buffer, size_t bufsize, const char * format, va_list ap );
extern int hb_printf_params( const char * format );

extern HB_BOOL hb_strMatchFile( const char * pszString, const char * szPattern );
extern HB_BOOL hb_strMatchRegExp( const char * szString, const char * szPattern );
extern HB_BOOL hb_strMatchWild( const char * szString, const char * szPattern );
extern HB_BOOL hb_strMatchWildExact( const char * szString, const char * szPattern );
extern HB_BOOL hb_strMatchCaseWildExact( const char * szString, const char * szPattern );
extern HB_BOOL hb_strEmpty( const char * szText, HB_SIZE nLen );
extern void hb_strDescend( char * szStringTo, const char * szStringFrom, HB_SIZE nLen );
extern HB_SIZE hb_strAt( const char * szSub, HB_SIZE nSubLen, const char * szText, HB_SIZE nLen );
extern HB_SIZE hb_strAtI( const char * szSub, HB_SIZE nSubLen, const char * szText, HB_SIZE nLen );
extern HB_ISIZ hb_strAtTBM( const char * needle, HB_ISIZ m, const char * haystack, HB_ISIZ n );


extern char * hb_strUpper( char * szText, HB_SIZE nLen );
extern char * hb_strLower( char * szText, HB_SIZE nLen );
extern HB_BOOL hb_charIsDigit( int iChar );
extern HB_BOOL hb_charIsAlpha( int iChar );
extern HB_BOOL hb_charIsLower( int iChar );
extern HB_BOOL hb_charIsUpper( int iChar );
extern int hb_charUpper( int iChar );
extern int hb_charLower( int iChar );

extern HB_BOOL hb_strIsDigit( const char * szChar );
extern HB_BOOL hb_strIsAlpha( const char * szChar );
extern HB_BOOL hb_strIsLower( const char * szChar );
extern HB_BOOL hb_strIsUpper( const char * szChar );
extern char * hb_strncpy( char * pDest, const char * pSource, HB_SIZE nLen );
extern char * hb_strncat( char * pDest, const char * pSource, HB_SIZE nLen );
extern char * hb_strncpyTrim( char * pDest, const char * pSource, HB_SIZE nLen );
extern char * hb_strncpyLower( char * pDest, const char * pSource, HB_SIZE nLen );
extern char * hb_strncpyUpper( char * pDest, const char * pSource, HB_SIZE nLen );
extern char * hb_strncpyUpperTrim( char * pDest, const char * pSource, HB_SIZE nLen );
extern const char * hb_strLTrim( const char * szText, HB_SIZE * nLen );
extern HB_SIZE hb_strRTrimLen( const char * szText, HB_SIZE nLen, HB_BOOL bAnySpace );
extern double hb_strVal( const char * szText, HB_SIZE nLen );
extern HB_MAXINT hb_strValInt( const char * szText, int * iOverflow );
extern char * hb_strRemEscSeq( char * szText, HB_SIZE * nLen );
extern char * hb_numToStr( char * szBuf, HB_SIZE nSize, HB_MAXINT nNumber );
extern char * hb_dblToStr( char * szBuf, HB_SIZE nSize, double dNumber, int iMaxDec );
extern double hb_numRound( double dResult, int iDec );
extern double hb_numInt( double dNum );
extern void hb_random_seed( HB_I32 seed );
extern double hb_random_num( void );
extern double hb_random_num_secure( void );
extern void hb_random_block( void * data, HB_SIZE len );
extern double hb_numDecConv( double dNum, int iDec );
extern double hb_numExpConv( double dNum, int iDec );
extern void hb_strtohex( const char * pSource, HB_SIZE size, char * pDest );

extern PHB_ITEM hb_strFormat( PHB_ITEM pItemReturn, PHB_ITEM pItemFormat, int iCount, PHB_ITEM * pItemArray );


extern void hb_put_ieee754( HB_BYTE * ptr, double d );
extern double hb_get_ieee754( const HB_BYTE * ptr );
extern void hb_put_ord_ieee754( HB_BYTE * ptr, double d );
extern double hb_get_ord_ieee754( const HB_BYTE * ptr );
extern double hb_get_rev_double( const HB_BYTE * ptr );
extern double hb_get_std_double( const HB_BYTE * ptr );
# 1027 "/home/hernad/harbour/include/hbapi.h"
extern PHB_DYNS hb_dynsymGet( const char * szName );
extern PHB_DYNS hb_dynsymGetCase( const char * szName );
extern PHB_DYNS hb_dynsymNew( PHB_SYMB pSymbol );
extern PHB_DYNS hb_dynsymFind( const char * szName );
extern PHB_DYNS hb_dynsymFindName( const char * szName );
extern void hb_dynsymRelease( void );
extern void hb_dynsymEval( PHB_DYNS_FUNC pFunction, void * Cargo );
extern void hb_dynsymProtectEval( PHB_DYNS_FUNC pFunction, void * Cargo );
extern PHB_SYMB hb_dynsymGetSymbol( const char * szName );
extern PHB_SYMB hb_dynsymFindSymbol( const char * szName );
extern PHB_SYMB hb_dynsymSymbol( PHB_DYNS pDynSym );
extern const char * hb_dynsymName( PHB_DYNS pDynSym );
extern HB_BOOL hb_dynsymIsFunction( PHB_DYNS pDynSym );
extern HB_BOOL hb_dynsymIsMemvar( PHB_DYNS pDynSym );
extern int hb_dynsymAreaHandle( PHB_DYNS pDynSym );
extern void hb_dynsymSetAreaHandle( PHB_DYNS pDynSym, int iArea );
extern int hb_dynsymToNum( PHB_DYNS pDynSym );
extern PHB_DYNS hb_dynsymFromNum( int iSymNum );







extern PHB_SYMB hb_symbolNew( const char * szName );


extern void hb_cmdargInit( int argc, char * argv[] );
extern int hb_cmdargARGC( void );
extern char ** hb_cmdargARGV( void );
extern const char * hb_cmdargARGVN( int argc );
extern HB_BOOL hb_cmdargIsInternal( const char * szArg, int * piLen );
extern char * hb_cmdargProgName( void );
extern char * hb_cmdargBaseProgName( void );
extern int hb_cmdargPushArgs( void );
extern void hb_cmdargUpdate( void );
extern HB_BOOL hb_cmdargCheck( const char * pszName );
extern char * hb_cmdargString( const char * pszName );
extern int hb_cmdargNum( const char * pszName );
extern void hb_cmdargProcess( void );
# 1076 "/home/hernad/harbour/include/hbapi.h"
extern void * hb_codeblockId( PHB_ITEM pItem );
extern PHB_CODEBLOCK hb_codeblockNew( const HB_BYTE * pBuffer, HB_USHORT uiLocals, const HB_BYTE * pLocalPosTable, PHB_SYMB pSymbols, HB_SIZE nLen );
extern PHB_CODEBLOCK hb_codeblockMacroNew( const HB_BYTE * pBuffer, HB_SIZE nLen );
extern PHB_ITEM hb_codeblockGetVar( PHB_ITEM pItem, int iItemPos );
extern PHB_ITEM hb_codeblockGetRef( PHB_CODEBLOCK pCBlock, int iItemPos );


extern void hb_memvarsClear( HB_BOOL fAll );
extern void hb_memvarSetValue( PHB_SYMB pMemvarSymb, PHB_ITEM pItem );
extern HB_ERRCODE hb_memvarGet( PHB_ITEM pItem, PHB_SYMB pMemvarSymb );
extern void hb_memvarGetValue( PHB_ITEM pItem, PHB_SYMB pMemvarSymb );
extern void hb_memvarGetRefer( PHB_ITEM pItem, PHB_SYMB pMemvarSymb );
extern HB_SIZE hb_memvarGetPrivatesBase( void );
extern void hb_memvarSetPrivatesBase( HB_SIZE nBase );
extern void hb_memvarUpdatePrivatesBase( void );
extern void hb_memvarNewParameter( PHB_SYMB pSymbol, PHB_ITEM pValue );
extern char * hb_memvarGetStrValuePtr( char * szVarName, HB_SIZE * pnLen );
extern void hb_memvarCreateFromItem( PHB_ITEM pMemvar, int iScope, PHB_ITEM pValue );
extern int hb_memvarScope( const char * szVarName, HB_SIZE nLength );
extern PHB_ITEM hb_memvarDetachLocal( PHB_ITEM pLocal );
extern PHB_ITEM hb_memvarGetValueBySym( PHB_DYNS pDynSym );
extern PHB_ITEM hb_memvarSaveInArray( int iScope, HB_BOOL fCopy );
extern void hb_memvarRestoreFromArray( PHB_ITEM pArray );
# 1110 "/home/hernad/harbour/include/hbapi.h"
extern void hb_conInit( void );
extern void hb_conRelease( void );
extern const char * hb_conNewLine( void );
extern void hb_conOutStd( const char * pStr, HB_SIZE nLen );
extern void hb_conOutErr( const char * pStr, HB_SIZE nLen );
extern void hb_conOutAlt( const char * pStr, HB_SIZE nLen );
extern int hb_conSetCursor( HB_BOOL bSetCursor, int iNewCursor );
extern const char * hb_conSetColor( const char * szColor );


extern char * hb_compEncodeString( int iMethod, const char * szText, HB_SIZE * pnLen );
extern char * hb_compDecodeString( int iMethod, const char * szText, HB_SIZE * pnLen );


extern char * hb_procname( int iLevel, char * szName, HB_BOOL bskipBlock );
extern HB_BOOL hb_procinfo( int iLevel, char * szName, HB_USHORT * puiLine, char * szFile );






typedef void * PHB_MACRO;

extern void hb_macroGetValue( PHB_ITEM pItem, int iContext, int flags );
extern void hb_macroSetValue( PHB_ITEM pItem, int flags );
extern void hb_macroPushReference( PHB_ITEM pItem );
extern void hb_macroTextValue( PHB_ITEM pItem );
extern void hb_macroPushSymbol( PHB_ITEM pItem );
extern void hb_macroRun( PHB_MACRO pMacro );
extern PHB_MACRO hb_macroCompile( const char * szString );
extern void hb_macroDelete( PHB_MACRO pMacro );
extern char * hb_macroTextSymbol( const char * szString, HB_SIZE nLength, HB_BOOL * pfNewString );
extern char * hb_macroExpandString( const char * szString, HB_SIZE nLength, HB_BOOL * pfNewString );
extern void hb_macroPopAliasedValue( PHB_ITEM pAlias, PHB_ITEM pVar, int flags );
extern void hb_macroPushAliasedValue( PHB_ITEM pAlias, PHB_ITEM pVar, int flags );
extern const char * hb_macroGetType( PHB_ITEM pItem );


extern void hb_releaseCPU( void );
extern void hb_idleState( void );
extern void hb_idleReset( void );
extern void hb_idleSleep( double dSeconds );


extern PHB_ITEM hb_i18n_ngettext( PHB_ITEM pNum, PHB_ITEM pMsgID, PHB_ITEM pContext );
extern PHB_ITEM hb_i18n_gettext( PHB_ITEM pMsgID, PHB_ITEM pContext );
# 1167 "/home/hernad/harbour/include/hbapi.h"
extern void hb_vmSetLinkedMain( const char * szMain );
extern void hb_vmSetDefaultGT( const char * szGtName );
extern HB_BOOL hb_vmInternalsEnabled( void );

extern PHB_FUNC hb_vmProcAddress( const char * szFuncName );

extern PHB_ITEM hb_libLoad( PHB_ITEM pLibName, PHB_ITEM pArgs );
extern HB_BOOL hb_libFree( PHB_ITEM pDynLib );
extern void * hb_libHandle( PHB_ITEM pDynLib );
extern void * hb_libSymAddr( PHB_ITEM pDynLib, const char * pszSymbol );

extern void hb_dynCall( int iFuncFlags, void * pFunction, int iParams, int iFirst, int * piArgFlags );


extern const char * hb_verHostCPU( void );
extern int hb_verHostBitWidth( void );
extern const char * hb_verCPU( void );
extern const char * hb_verPlatformMacro( void );
extern char * hb_verPlatform( void );
extern char * hb_verCompiler( void );
extern char * hb_verHarbour( void );
extern char * hb_verPCode( void );
extern void hb_verBuildInfo( void );
extern const char * hb_verCommitID( void );
extern int hb_verCommitRev( void );
extern const char * hb_verCommitInfo( void );
# 1202 "/home/hernad/harbour/include/hbapi.h"
extern const char * hb_verFlagsC( void );
extern const char * hb_verFlagsL( void );
extern const char * hb_verFlagsPRG( void );
extern const char * hb_verHB_PLAT( void );
extern const char * hb_verHB_COMP( void );

extern int hb_iswine( void );
extern int hb_iswin9x( void );
extern int hb_iswinnt( void );
extern HB_BOOL hb_iswin2k( void );
extern HB_BOOL hb_iswin2k3( void );
extern HB_BOOL hb_iswinvista( void );
extern HB_BOOL hb_iswin7( void );
extern HB_BOOL hb_iswin8( void );
extern HB_BOOL hb_iswin81( void );
extern HB_BOOL hb_iswin10( void );
extern HB_BOOL hb_iswince( void );
extern HB_BOOL hb_iswinver( int iMajor, int iMinor, int iType, HB_BOOL fOrUpper );
extern HB_BOOL hb_iswinsp( int iServicePackMajor, HB_BOOL fOrUpper );

extern HB_BOOL hb_printerIsReady( const char * pszPrinterName );


extern HB_BOOL hb_osUseCP( void );
extern const char * hb_osEncodeCP( const char * szName, char ** pszFree, HB_SIZE * pnSize );
extern const char * hb_osDecodeCP( const char * szName, char ** pszFree, HB_SIZE * pnSize );

extern char * hb_osStrEncode( const char * pszName );
extern char * hb_osStrEncodeN( const char * pszName, HB_SIZE nLen );
extern char * hb_osStrDecode( const char * pszName );
extern char * hb_osStrDecode2( const char * pszName, char * pszBuffer, HB_SIZE nSize );
# 1241 "/home/hernad/harbour/include/hbapi.h"
extern HB_BOOL hb_getenv_buffer( const char * szName, char * szBuffer, int nSize );

extern char * hb_getenv( const char * name );
extern HB_BOOL hb_setenv( const char * szName, const char * szValue );
extern char * hb_netname( void );
extern char * hb_username( void );







# 51 "/home/hernad/harbour/include/hbxvm.h" 2
# 1 "/home/hernad/harbour/include/hbapiitm.h" 1
# 52 "/home/hernad/harbour/include/hbapiitm.h"




typedef struct
{
   HB_USHORT paramCount;
   PHB_ITEM pItems[ 9 + 1 ];
} HB_EVALINFO, * PHB_EVALINFO;

extern PHB_ITEM hb_evalLaunch ( PHB_EVALINFO pEvalInfo );
extern HB_BOOL hb_evalNew ( PHB_EVALINFO pEvalInfo, PHB_ITEM pItem );
extern HB_BOOL hb_evalPutParam ( PHB_EVALINFO pEvalInfo, PHB_ITEM pItem );
extern HB_BOOL hb_evalRelease ( PHB_EVALINFO pEvalInfo );

extern void hb_evalBlock( PHB_ITEM pCodeBlock, ... );
extern void hb_evalBlock0( PHB_ITEM pCodeBlock );
extern void hb_evalBlock1( PHB_ITEM pCodeBlock, PHB_ITEM pParam );

extern HB_BOOL hb_execFromArray ( PHB_ITEM pParam );

extern PHB_ITEM hb_itemDo ( PHB_ITEM pItem, HB_ULONG ulPCount, ... );
extern PHB_ITEM hb_itemDoC ( const char * szFunc, HB_ULONG ulPCount, ... );

extern PHB_ITEM hb_itemArrayGet ( PHB_ITEM pArray, HB_SIZE nIndex );
extern PHB_ITEM hb_itemArrayNew ( HB_SIZE nLen );
extern PHB_ITEM hb_itemArrayPut ( PHB_ITEM pArray, HB_SIZE nIndex, PHB_ITEM pItem );
extern HB_SIZE hb_itemCopyC ( PHB_ITEM pItem, char * szBuffer, HB_SIZE nLen );
extern HB_BOOL hb_itemFreeC ( char * szText );
extern char * hb_itemGetC ( PHB_ITEM pItem );
extern const char * hb_itemGetCPtr ( PHB_ITEM pItem );
extern HB_SIZE hb_itemGetCLen ( PHB_ITEM pItem );
extern char * hb_itemGetDS ( PHB_ITEM pItem, char * szDate );
extern char * hb_itemGetTS ( PHB_ITEM pItem, char * szDateTime );
extern long hb_itemGetDL ( PHB_ITEM pItem );
extern double hb_itemGetTD ( PHB_ITEM pItem );
extern HB_BOOL hb_itemGetTDT ( PHB_ITEM pItem, long * plJulian, long * plMilliSec );
extern HB_BOOL hb_itemGetL ( PHB_ITEM pItem );
extern HB_BOOL hb_itemGetLX ( PHB_ITEM pItem );
extern double hb_itemGetND ( PHB_ITEM pItem );
extern double hb_itemGetNDDec ( PHB_ITEM pItem, int * piDec );
extern int hb_itemGetNI ( PHB_ITEM pItem );
extern long hb_itemGetNL ( PHB_ITEM pItem );
extern HB_ISIZ hb_itemGetNS ( PHB_ITEM pItem );
extern HB_MAXINT hb_itemGetNInt ( PHB_ITEM pItem );
extern void hb_itemGetNLen ( PHB_ITEM pItem, int * piWidth, int * piDec );
extern void * hb_itemGetPtr ( PHB_ITEM pItem );
extern void * hb_itemGetPtrGC ( PHB_ITEM pItem, const HB_GC_FUNCS * pFuncs );
extern PHB_SYMB hb_itemGetSymbol ( PHB_ITEM pItem );
extern PHB_ITEM hb_itemNew ( PHB_ITEM pNull );
extern void hb_itemInit ( PHB_ITEM pItem );
extern HB_USHORT hb_itemPCount ( void );
extern PHB_ITEM hb_itemParam ( HB_USHORT uiParam );
extern PHB_ITEM hb_itemPutC ( PHB_ITEM pItem, const char * szText );
extern PHB_ITEM hb_itemPutCL ( PHB_ITEM pItem, const char * szText, HB_SIZE nLen );
extern PHB_ITEM hb_itemPutCConst ( PHB_ITEM pItem, const char * szText );
extern PHB_ITEM hb_itemPutCLConst( PHB_ITEM pItem, const char * szText, HB_SIZE nLen );
extern PHB_ITEM hb_itemPutCPtr ( PHB_ITEM pItem, char * szText );
extern PHB_ITEM hb_itemPutCLPtr ( PHB_ITEM pItem, char * szText, HB_SIZE nLen );
extern void hb_itemSetCMemo ( PHB_ITEM pItem );
extern PHB_ITEM hb_itemPutD ( PHB_ITEM pItem, int iYear, int iMonth, int iDay );
extern PHB_ITEM hb_itemPutDS ( PHB_ITEM pItem, const char * szDate );
extern PHB_ITEM hb_itemPutTS ( PHB_ITEM pItem, const char * szDateTime );
extern PHB_ITEM hb_itemPutDL ( PHB_ITEM pItem, long lJulian );
extern PHB_ITEM hb_itemPutTD ( PHB_ITEM pItem, double dTimeStamp );
extern PHB_ITEM hb_itemPutTDT ( PHB_ITEM pItem, long lJulian, long lMilliSec );
extern PHB_ITEM hb_itemPutL ( PHB_ITEM pItem, HB_BOOL bValue );
extern PHB_ITEM hb_itemPutND ( PHB_ITEM pItem, double dNumber );
extern PHB_ITEM hb_itemPutNI ( PHB_ITEM pItem, int iNumber );
extern PHB_ITEM hb_itemPutNL ( PHB_ITEM pItem, long lNumber );
extern PHB_ITEM hb_itemPutNS ( PHB_ITEM pItem, HB_ISIZ nNumber );
extern PHB_ITEM hb_itemPutNInt ( PHB_ITEM pItem, HB_MAXINT nNumber );
extern PHB_ITEM hb_itemPutNIntLen( PHB_ITEM pItem, HB_MAXINT nNumber, int iWidth );
extern PHB_ITEM hb_itemPutNLen ( PHB_ITEM pItem, double dNumber, int iWidth, int iDec );
extern PHB_ITEM hb_itemPutNDLen ( PHB_ITEM pItem, double dNumber, int iWidth, int iDec );
extern PHB_ITEM hb_itemPutNDDec ( PHB_ITEM pItem, double dNumber, int iDec );
extern PHB_ITEM hb_itemPutNILen ( PHB_ITEM pItem, int iNumber, int iWidth );
extern PHB_ITEM hb_itemPutNLLen ( PHB_ITEM pItem, long lNumber, int iWidth );
extern PHB_ITEM hb_itemPutNumType( PHB_ITEM pItem, double dNumber, int iDec, int iType1, int iType2 );
extern PHB_ITEM hb_itemPutPtr ( PHB_ITEM pItem, void * pValue );
extern PHB_ITEM hb_itemPutPtrGC ( PHB_ITEM pItem, void * pValue );
extern PHB_ITEM hb_itemPutSymbol ( PHB_ITEM pItem, PHB_SYMB pSym );
extern PHB_ITEM hb_itemPutNil ( PHB_ITEM pItem );
extern HB_BOOL hb_itemRelease ( PHB_ITEM pItem );
extern PHB_ITEM hb_itemReturn ( PHB_ITEM pItem );
extern PHB_ITEM hb_itemReturnForward( PHB_ITEM pItem );
extern void hb_itemReturnRelease( PHB_ITEM pItem );
extern HB_SIZE hb_itemSize ( PHB_ITEM pItem );
extern HB_TYPE hb_itemType ( PHB_ITEM pItem );
extern const char * hb_itemTypeStr ( PHB_ITEM pItem );

extern HB_LONGLONG hb_itemGetNLL ( PHB_ITEM pItem );
extern PHB_ITEM hb_itemPutNLL ( PHB_ITEM pItem, HB_LONGLONG lNumber );
extern PHB_ITEM hb_itemPutNLLLen ( PHB_ITEM pItem, HB_LONGLONG lNumber, int iWidth );




extern PHB_ITEM hb_itemParamPtr ( HB_USHORT uiParam, long lMask );
extern HB_BOOL hb_itemParamStore( HB_USHORT uiParam, PHB_ITEM pItem );
extern HB_BOOL hb_itemParamStoreForward( HB_USHORT uiParam, PHB_ITEM pItem );
extern HB_BOOL hb_itemParamStoreRelease( HB_USHORT uiParam, PHB_ITEM pItem );
extern HB_BOOL hb_itemEqual ( PHB_ITEM pItem1, PHB_ITEM pItem2 );
extern HB_BOOL hb_itemCompare ( PHB_ITEM pItem1, PHB_ITEM pItem2, HB_BOOL bForceExact, int * piResult );
extern int hb_itemStrCmp ( PHB_ITEM pFirst, PHB_ITEM pSecond, HB_BOOL bForceExact );
extern int hb_itemStrICmp ( PHB_ITEM pFirst, PHB_ITEM pSecond, HB_BOOL bForceExact );
extern void hb_itemCopy ( PHB_ITEM pDest, PHB_ITEM pSource );
extern void hb_itemCopyToRef ( PHB_ITEM pDest, PHB_ITEM pSource );
extern void hb_itemCopyFromRef( PHB_ITEM pDest, PHB_ITEM pSource );
extern void hb_itemMove ( PHB_ITEM pDest, PHB_ITEM pSource );
extern void hb_itemMoveRef ( PHB_ITEM pDest, PHB_ITEM pSource );
extern void hb_itemMoveToRef ( PHB_ITEM pDest, PHB_ITEM pSource );
extern void hb_itemMoveFromRef( PHB_ITEM pDest, PHB_ITEM pSource );
extern void hb_itemClear ( PHB_ITEM pItem );
extern PHB_ITEM hb_itemUnRef ( PHB_ITEM pItem );
extern PHB_ITEM hb_itemUnRefOnce ( PHB_ITEM pItem );
extern PHB_ITEM hb_itemUnRefRefer( PHB_ITEM pItem );
extern PHB_ITEM hb_itemUnRefWrite( PHB_ITEM pItem, PHB_ITEM pSource );
extern PHB_ITEM hb_itemUnShare ( PHB_ITEM pItem );
extern PHB_ITEM hb_itemUnShareString( PHB_ITEM pItem );
extern PHB_ITEM hb_itemReSizeString( PHB_ITEM pItem, HB_SIZE nSize );
extern HB_BOOL hb_itemGetWriteCL( PHB_ITEM pItem, char ** pszValue, HB_SIZE * pnLen );
extern PHB_ITEM hb_itemClone ( PHB_ITEM pItem );
extern void hb_itemCloneTo ( PHB_ITEM pDest, PHB_ITEM pSource );
extern char * hb_itemStr ( PHB_ITEM pNumber, PHB_ITEM pWidth, PHB_ITEM pDec );
extern char * hb_itemString ( PHB_ITEM pItem, HB_SIZE * nLen, HB_BOOL * bFreeReq );
extern HB_BOOL hb_itemStrBuf ( char *szResult, PHB_ITEM pNumber, int iSize, int iDec );
extern PHB_ITEM hb_itemValToStr ( PHB_ITEM pItem );
extern char * hb_itemPadConv ( PHB_ITEM pItem, HB_SIZE * pnSize, HB_BOOL * bFreeReq );
extern void hb_itemSwap ( PHB_ITEM pItem1, PHB_ITEM pItem2 );

extern char * hb_itemSerialize( PHB_ITEM pItem, int iFlags, HB_SIZE * pnSize );
extern PHB_ITEM hb_itemDeserialize( const char ** pBufferPtr, HB_SIZE * pnSize );
# 235 "/home/hernad/harbour/include/hbapiitm.h"

# 52 "/home/hernad/harbour/include/hbxvm.h" 2
# 1 "/home/hernad/harbour/include/hbvm.h" 1
# 52 "/home/hernad/harbour/include/hbvm.h"



extern void hb_vmInit( HB_BOOL bStartMainProc );
extern int hb_vmQuit( void );
# 65 "/home/hernad/harbour/include/hbvm.h"
extern void hb_vmAtInit( HB_INIT_FUNC pFunc, void * cargo );
extern void hb_vmAtExit( HB_INIT_FUNC pFunc, void * cargo );
extern void hb_vmAtQuit( HB_INIT_FUNC pFunc, void * cargo );


extern void hb_vmExecute( const HB_BYTE * pCode, PHB_SYMB pSymbols ) __attribute__ (( flatten ));
extern PHB_SYMB hb_vmProcessSymbols( PHB_SYMB pSymbols, HB_USHORT uiSymbols, const char * szModuleName, HB_ULONG ulID, HB_USHORT uiPcodeVer );
extern PHB_SYMB hb_vmProcessDynLibSymbols( PHB_SYMB pSymbols, HB_USHORT uiSymbols, const char * szModuleName, HB_ULONG ulID, HB_USHORT uiPcodeVer );
# 113 "/home/hernad/harbour/include/hbvm.h"
extern void hb_vmSetExceptionHandler( void );
extern void hb_vmUnsetExceptionHandler( void );

extern void hb_vmSymbolInit_RT( void );


extern void hb_vmRequestDebug( void );
extern void hb_vmRequestBreak( PHB_ITEM pItem );
extern void hb_vmRequestCancel( void );
extern void hb_vmRequestQuit( void );
extern void hb_vmRequestEndProc( void );
extern HB_USHORT hb_vmRequestQuery( void );
extern HB_BOOL hb_vmRequestReenter( void );
extern void hb_vmRequestRestore( void );
extern HB_BOOL hb_vmRequestReenterExt( void );
extern HB_BOOL hb_vmTryEval( PHB_ITEM * pResult, PHB_ITEM pItem, HB_ULONG ulPCount, ... );

extern HB_BOOL hb_vmIsActive( void );
extern HB_BOOL hb_vmIsReady( void );
# 144 "/home/hernad/harbour/include/hbvm.h"
extern void hb_vmDo( HB_USHORT uiParams );
extern void hb_vmProc( HB_USHORT uiParams );
extern void hb_vmFunction( HB_USHORT uiParams );
extern void hb_vmSend( HB_USHORT uiParams );
extern PHB_ITEM hb_vmEvalBlock( PHB_ITEM pBlockItem );

extern PHB_ITEM hb_vmEvalBlockV( PHB_ITEM pBlockItem, HB_ULONG ulArgCount, ... );
extern PHB_ITEM hb_vmEvalBlockOrMacro( PHB_ITEM pItem );
extern void hb_vmDestroyBlockOrMacro( PHB_ITEM pItem );


extern void hb_vmPush( PHB_ITEM pItem );
extern void hb_vmPushNil( void );
extern void hb_vmPushNumber( double dNumber, int iDec );
extern void hb_vmPushInteger( int iNumber );
extern void hb_vmPushLong( long lNumber );
extern void hb_vmPushDouble( double dNumber, int iDec );
extern void hb_vmPushSize( HB_ISIZ nNumber );
extern void hb_vmPushNumInt( HB_MAXINT nNumber );
extern void hb_vmPushLogical( HB_BOOL bValue );
extern void hb_vmPushString( const char * szText, HB_SIZE length );
extern void hb_vmPushStringPcode( const char * szText, HB_SIZE length );
extern void hb_vmPushDate( long lDate );
extern void hb_vmPushTimeStamp( long lJulian, long lMilliSec );
extern void hb_vmPushSymbol( PHB_SYMB pSym );
extern void hb_vmPushDynSym( PHB_DYNS pDynSym );
extern void hb_vmPushEvalSym( void );
extern void hb_vmPushPointer( void * pPointer );
extern void hb_vmPushPointerGC( void * pPointer );
extern void hb_vmPushItemRef( PHB_ITEM pItem );

extern HB_BOOL hb_vmIsMt( void );
extern void hb_vmLock( void );
extern void hb_vmLockForce( void );
extern void hb_vmUnlock( void );




extern HB_BOOL hb_vmThreadRegister( void * );
extern void hb_vmThreadRelease( void * );
extern void hb_vmThreadInit( void * );
extern void hb_vmThreadQuit( void );
extern void hb_vmThreadQuitRequest( void * );
extern void hb_vmWaitForThreads( void );
extern void hb_vmTerminateThreads( void );
extern PHB_ITEM hb_vmThreadStart( HB_ULONG ulAttr, PHB_CARGO_FUNC pThreadFunc, void * cargo );
extern void * hb_vmThreadState( void );


# 53 "/home/hernad/harbour/include/hbxvm.h" 2
# 1 "/home/hernad/harbour/include/hbstack.h" 1
# 57 "/home/hernad/harbour/include/hbstack.h"







typedef void (*PHB_TSD_FUNC)(void *);
typedef struct
{
   int iHandle;
   int iSize;
   PHB_TSD_FUNC pInitFunc;
   PHB_TSD_FUNC pCleanFunc;
}
HB_TSD, * PHB_TSD;
# 82 "/home/hernad/harbour/include/hbstack.h"
typedef struct
{
   HB_ERRCODE uiFError;
   HB_ERRCODE uiErrorLast;
   HB_ERRCODE uiOsErrorLast;
   HB_ERRCODE uiSocketError;
   int iSocketOsError;
}
HB_IOERRORS, * PHB_IOERRORS;

typedef struct
{
   const char * szDefaultRDD;
   HB_BOOL fNetError;

   void ** waList;
   HB_USHORT uiWaMax;
   HB_USHORT uiWaSpace;

   HB_USHORT * waNums;
   HB_USHORT uiWaNumMax;

   HB_USHORT uiCurrArea;
   void * pCurrArea;
}
HB_STACKRDD, * PHB_STACKRDD;
# 273 "/home/hernad/harbour/include/hbstack.h"
extern void * hb_stackId( void );
extern PHB_ITEM hb_stackItemFromTop( int nFromTop );
extern PHB_ITEM hb_stackItemFromBase( int nFromBase );
extern PHB_ITEM hb_stackBaseItem( void );
extern PHB_ITEM hb_stackSelfItem( void );
extern PHB_ITEM hb_stackReturnItem( void );

extern PHB_ITEM hb_stackAllocItem( void );
extern void hb_stackPop( void );
extern void hb_stackPush( void );

extern void hb_stackPushReturn( void );
extern void hb_stackPopReturn( void );

extern HB_ISIZ hb_stackTopOffset( void );
extern HB_ISIZ hb_stackBaseOffset( void );
extern HB_ISIZ hb_stackTotalItems( void );
extern PHB_ITEM hb_stackItem( HB_ISIZ nItemPos );


extern int hb_stackCallDepth( void );
extern void hb_stackBaseProcInfo( char * szProcName, HB_USHORT * puiProcLine );

extern HB_ISIZ hb_stackBaseProcOffset( int iLevel );
extern HB_ISIZ hb_stackBaseSymbolOffset( PHB_SYMB pSymbol );
extern void hb_stackDispCall( void );


extern void * hb_stackGetTSD( PHB_TSD pTSD );
extern void * hb_stackTestTSD( PHB_TSD pTSD );
extern void hb_stackReleaseTSD( PHB_TSD pTSD );

extern char * hb_stackDateBuffer( void );
extern char * hb_stackDirBuffer( void );
extern PHB_IOERRORS hb_stackIOErrors( void );
extern void * hb_stackGetGT( void );
extern void hb_stackSetGT( void * );
extern PHB_STACKRDD hb_stackRDD( void );

extern void ** hb_stackDebugInfo( void );
# 503 "/home/hernad/harbour/include/hbstack.h"

# 54 "/home/hernad/harbour/include/hbxvm.h" 2


# 65 "/home/hernad/harbour/include/hbxvm.h"
extern void hb_xvmExitProc( void );
extern void hb_xvmEndProc( void );
extern void hb_xvmSeqBegin( void );
extern HB_BOOL hb_xvmSeqEnd( void );
extern HB_BOOL hb_xvmSeqEndTest( void );
extern HB_BOOL hb_xvmSeqRecover( void );
extern void hb_xvmSeqAlways( void );
extern HB_BOOL hb_xvmAlwaysBegin( void );
extern HB_BOOL hb_xvmAlwaysEnd( void );
extern HB_BOOL hb_xvmSeqBlock( void );

extern HB_BOOL hb_xvmEnumStart( int, int );
extern HB_BOOL hb_xvmEnumNext( void );
extern HB_BOOL hb_xvmEnumPrev( void );
extern void hb_xvmEnumEnd( void );

extern void hb_xvmWithObjectStart( void );
extern void hb_xvmWithObjectEnd( void );
extern void hb_xvmWithObjectMessage( PHB_SYMB );

extern HB_BOOL hb_xvmSwitchGet( PHB_ITEM * );

extern void hb_xvmSetLine( HB_USHORT uiLine );

extern void hb_xvmFrame( int iLocals, int iParams );
extern void hb_xvmVFrame( int iLocals, int iParams );
extern void hb_xvmSFrame( PHB_SYMB pSymbol );
extern void hb_xvmStatics( PHB_SYMB pSymbol, HB_USHORT uiStatics );
extern void hb_xvmThreadStatics( HB_USHORT uiStatics, const HB_BYTE * statics );
extern void hb_xvmParameter( PHB_SYMB pSymbol, int iParams );
extern void hb_xvmRetValue( void );
extern void hb_xvmRetNil( void );
extern void hb_xvmRetInt( HB_LONG lValue );
extern HB_BOOL hb_xvmDo( HB_USHORT uiParams );
extern HB_BOOL hb_xvmFunction( HB_USHORT uiParams );
extern HB_BOOL hb_xvmSend( HB_USHORT uiParams );
extern HB_BOOL hb_xvmPushObjectVarRef( void );
extern void hb_xvmPushStatic( HB_USHORT uiStatic );
extern void hb_xvmPushStaticByRef( HB_USHORT uiStatic );
extern void hb_xvmPopStatic( HB_USHORT uiStatic );
extern HB_BOOL hb_xvmPushVariable( PHB_SYMB pSymbol );
extern HB_BOOL hb_xvmPopVariable( PHB_SYMB pSymbol );
extern void hb_xvmPushBlock( const HB_BYTE * pCode, PHB_SYMB pSymbols );
extern void hb_xvmPushBlockShort( const HB_BYTE * pCode, PHB_SYMB pSymbols );
extern void hb_xvmPushBlockLarge( const HB_BYTE * pCode, PHB_SYMB pSymbols );
extern void hb_xvmPushSelf( void );
extern void hb_xvmPushVParams( void );
extern void hb_xvmPushAParams( void );
extern void hb_xvmPushLocal( HB_SHORT iLocal );
extern void hb_xvmPushLocalByRef( HB_SHORT iLocal );
extern void hb_xvmPopLocal( HB_SHORT iLocal );
extern HB_BOOL hb_xvmPushField( PHB_SYMB pSymbol );
extern HB_BOOL hb_xvmPopField( PHB_SYMB pSymbol );
extern HB_BOOL hb_xvmPushMemvar( PHB_SYMB pSymbol );
extern HB_BOOL hb_xvmPushMemvarByRef( PHB_SYMB pSymbol );
extern HB_BOOL hb_xvmPopMemvar( PHB_SYMB pSymbol );
extern HB_BOOL hb_xvmPushAliasedField( PHB_SYMB pSymbol );
extern HB_BOOL hb_xvmPopAliasedField( PHB_SYMB pSymbol );
extern HB_BOOL hb_xvmPushAliasedFieldExt( PHB_SYMB pAlias, PHB_SYMB pField );
extern HB_BOOL hb_xvmPopAliasedFieldExt( PHB_SYMB pAlias, PHB_SYMB pField );
extern HB_BOOL hb_xvmPushAliasedVar( PHB_SYMB pSymbol );
extern HB_BOOL hb_xvmPopAliasedVar( PHB_SYMB pSymbol );
extern HB_BOOL hb_xvmPushAlias( void );
extern HB_BOOL hb_xvmPopAlias( void );
extern HB_BOOL hb_xvmPopLogical( HB_BOOL * );
extern HB_BOOL hb_xvmSwapAlias( void );
extern HB_BOOL hb_xvmLocalAddInt( int iLocal, HB_LONG lAdd );
extern HB_BOOL hb_xvmLocalInc( int iLocal );
extern HB_BOOL hb_xvmLocalDec( int iLocal );
extern HB_BOOL hb_xvmLocalIncPush( int iLocal );

extern HB_BOOL hb_xvmAnd( void );
extern HB_BOOL hb_xvmOr( void );
extern HB_BOOL hb_xvmNot( void );
extern HB_BOOL hb_xvmNegate( void );
extern void hb_xvmDuplicate( void );
extern void hb_xvmDuplUnRef( void );
extern void hb_xvmPushUnRef( void );
extern void hb_xvmSwap( int iCount );
extern HB_BOOL hb_xvmForTest( void );
extern void hb_xvmFuncPtr( void );
extern HB_BOOL hb_xvmEqual( void );
extern HB_BOOL hb_xvmExactlyEqual( void );
extern HB_BOOL hb_xvmNotEqual( void );
extern HB_BOOL hb_xvmLess( void );
extern HB_BOOL hb_xvmLessEqual( void );
extern HB_BOOL hb_xvmGreater( void );
extern HB_BOOL hb_xvmGreaterEqual( void );
extern HB_BOOL hb_xvmInstring( void );
extern HB_BOOL hb_xvmPlus( void );
extern HB_BOOL hb_xvmPlusEq( void );
extern HB_BOOL hb_xvmPlusEqPop( void );
extern HB_BOOL hb_xvmMinus( void );
extern HB_BOOL hb_xvmMinusEq( void );
extern HB_BOOL hb_xvmMinusEqPop( void );
extern HB_BOOL hb_xvmMult( void );
extern HB_BOOL hb_xvmMultEq( void );
extern HB_BOOL hb_xvmMultEqPop( void );
extern HB_BOOL hb_xvmDivide( void );
extern HB_BOOL hb_xvmDivEq( void );
extern HB_BOOL hb_xvmDivEqPop( void );
extern HB_BOOL hb_xvmModulus( void );
extern HB_BOOL hb_xvmModEq( void );
extern HB_BOOL hb_xvmModEqPop( void );
extern HB_BOOL hb_xvmPower( void );
extern HB_BOOL hb_xvmExpEq( void );
extern HB_BOOL hb_xvmExpEqPop( void );
extern HB_BOOL hb_xvmInc( void );
extern HB_BOOL hb_xvmIncEq( void );
extern HB_BOOL hb_xvmIncEqPop( void );
extern HB_BOOL hb_xvmDec( void );
extern HB_BOOL hb_xvmDecEq( void );
extern HB_BOOL hb_xvmDecEqPop( void );

extern void hb_xvmArrayDim( HB_USHORT uiDimensions );
extern void hb_xvmArrayGen( HB_SIZE nElements );
extern HB_BOOL hb_xvmArrayPush( void );
extern HB_BOOL hb_xvmArrayPushRef( void );
extern HB_BOOL hb_xvmArrayPop( void );
extern void hb_xvmHashGen( HB_SIZE nElements );

extern void hb_xvmLocalName( HB_USHORT uiLocal, const char * szLocalName );
extern void hb_xvmStaticName( HB_BYTE bIsGlobal, HB_USHORT uiStatic, const char * szStaticName );
extern void hb_xvmModuleName( const char * szModuleName );

extern HB_BOOL hb_xvmMacroDo( HB_USHORT uiArgSets );
extern HB_BOOL hb_xvmMacroFunc( HB_USHORT uiArgSets );
extern HB_BOOL hb_xvmMacroSend( HB_USHORT uiArgSets );
extern HB_BOOL hb_xvmMacroArrayGen( HB_USHORT uiArgSets );
extern HB_BOOL hb_xvmMacroPush( int bFlags );
extern HB_BOOL hb_xvmMacroPushRef( void );
extern HB_BOOL hb_xvmMacroPushIndex( void );
extern HB_BOOL hb_xvmMacroPushArg( PHB_SYMB pSymbol, int bFlags );
extern HB_BOOL hb_xvmMacroPushList( int bFlags );
extern HB_BOOL hb_xvmMacroPushAliased( int bFlags );
extern HB_BOOL hb_xvmMacroPushPare( int bFlags );
extern HB_BOOL hb_xvmMacroPop( int bFlags );
extern HB_BOOL hb_xvmMacroPopAliased( int bFlags );
extern HB_BOOL hb_xvmMacroSymbol( void );
extern HB_BOOL hb_xvmMacroText( void );

extern void hb_xvmPushStringHidden( int iMethod, const char * szText, HB_SIZE nSize );
extern void hb_xvmPushDouble( double dNumber, int iWidth, int iDec );



extern void hb_xvmPushLongLong( HB_LONGLONG llNumber );
# 227 "/home/hernad/harbour/include/hbxvm.h"
extern HB_BOOL hb_xvmArrayItemPush( HB_SIZE nIndex );
extern HB_BOOL hb_xvmArrayItemPop( HB_SIZE nIndex );
extern HB_BOOL hb_xvmMultByInt( HB_LONG lValue );
extern HB_BOOL hb_xvmDivideByInt( HB_LONG lValue );
extern HB_BOOL hb_xvmModulusByInt( HB_LONG lValue );
extern HB_BOOL hb_xvmAddInt( HB_LONG lValue );
extern void hb_xvmLocalSetInt( int iLocal, HB_LONG lValue );

extern void hb_xvmPushFuncSymbol( PHB_SYMB pSym );

extern HB_BOOL hb_xvmLessThenInt( HB_LONG lValue );
extern HB_BOOL hb_xvmLessThenIntIs( HB_LONG lValue, HB_BOOL * fValue );
extern HB_BOOL hb_xvmLessEqualThenInt( HB_LONG lValue );
extern HB_BOOL hb_xvmLessEqualThenIntIs( HB_LONG lValue, HB_BOOL * fValue );
extern HB_BOOL hb_xvmGreaterThenInt( HB_LONG lValue );
extern HB_BOOL hb_xvmGreaterThenIntIs( HB_LONG lValue, HB_BOOL * fValue );
extern HB_BOOL hb_xvmGreaterEqualThenInt( HB_LONG lValue );
extern HB_BOOL hb_xvmGreaterEqualThenIntIs( HB_LONG lValue, HB_BOOL * fValue );
extern HB_BOOL hb_xvmEqualInt( HB_LONG lValue );
extern HB_BOOL hb_xvmEqualIntIs( HB_LONG lValue, HB_BOOL * fValue );
extern HB_BOOL hb_xvmNotEqualInt( HB_LONG lValue );
extern HB_BOOL hb_xvmNotEqualIntIs( HB_LONG lValue, HB_BOOL * fValue );

extern HB_BOOL hb_xvmLocalAdd( int iLocal );
extern HB_BOOL hb_xvmStaticAdd( HB_USHORT uiStatic );
extern HB_BOOL hb_xvmMemvarAdd( PHB_SYMB pSymbol );

extern void hb_xvmCopyLocals( int iDest, int iSource );


# 11 "src/cli_fib_prg.c" 2

 void HB_FUN_MAIN ( void );
 extern void HB_FUN_QOUT ( void );
 extern void HB_FUN_F1 ( void );
 extern void HB_FUN_F1B ( void );
 extern void HB_FUN_F1D_RUST ( void );
 extern void HB_FUN_DBF_TEST ( void );

static HB_SYMB symbols_table[] = {{"MAIN", {0x0001 | 0x0004 | 0x0200}, {HB_FUN_MAIN}, 
# 19 "src/cli_fib_prg.c" 3 4
                                                                                                                            ((void *)0)
# 19 "src/cli_fib_prg.c"
                                                                                                                                },
 {"QOUT", {0x0001}, {HB_FUN_QOUT}, 
# 20 "src/cli_fib_prg.c" 3 4
                                              ((void *)0)
# 20 "src/cli_fib_prg.c"
                                                  },
 {"F1", {0x0001}, {HB_FUN_F1}, 
# 21 "src/cli_fib_prg.c" 3 4
                                          ((void *)0)
# 21 "src/cli_fib_prg.c"
                                              },
 {"F1B", {0x0001}, {HB_FUN_F1B}, 
# 22 "src/cli_fib_prg.c" 3 4
                                            ((void *)0)
# 22 "src/cli_fib_prg.c"
                                                },
 {"F1D_RUST", {0x0001}, {HB_FUN_F1D_RUST}, 
# 23 "src/cli_fib_prg.c" 3 4
                                                      ((void *)0)
# 23 "src/cli_fib_prg.c"
                                                          },
 {"DBF_TEST", {0x0001}, {HB_FUN_DBF_TEST}, 
# 24 "src/cli_fib_prg.c" 3 4
                                                      ((void *)0)
# 24 "src/cli_fib_prg.c"
                                                          }
}; static PHB_SYMB symbols = symbols_table; static void __attribute__ ((constructor)) hb_vm_SymbolInit_CLI_FIB_PRG( void ) { symbols = hb_vmProcessSymbols( symbols_table, ( HB_USHORT ) ( sizeof( symbols_table ) / sizeof( HB_SYMB ) ), (""), (0x0), (0x0003) ); }
# 34 "src/cli_fib_prg.c"
 void HB_FUN_MAIN ( void )
{
 do
 {
# 78 "src/cli_fib_prg.c"
  hb_xvmPushFuncSymbol(symbols + 5);

  if (hb_xvmDo(0))
   break;



 } while (0);
}
