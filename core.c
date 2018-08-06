#include "hbapi.h"
#include "hbapiitm.h"

#include "fibonacci.h"

HB_FUNC( FIBONACCI_VER ) {
   hb_retc("0.1.0");
}

HB_FUNC( FIBONACCI ) {

   hb_retni( fibonacci(5) );

}
