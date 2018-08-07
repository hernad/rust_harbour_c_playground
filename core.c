#include "hbapi.h"
#include "hbapiitm.h"

#include "fibonacci.h"

HB_FUNC( FIBONACCI_VER ) {
   hb_retc("0.1.0");
}

HB_FUNC( FIBONACCI ) {

   hb_retni( fibonacci(5) );

}

HB_FUNC( F1_C ) {

   printf( "%d", f1d_rust() );
   hb_retc( f1d_rust() );

   //hb_retc("blabla");

}