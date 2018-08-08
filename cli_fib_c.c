#include <stdio.h>
#include "fibonacci.h"

//  gcc -L . -l fibonacci -o fibo_c.exe cli_fib_c.c

int main() {
   printf("fibo3=%d\n", fibonacci(3));
   
   hb_run_main_from_rust();
   return 0;

}
