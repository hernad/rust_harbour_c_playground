/*
 * Harbour 3.4.6hernad (0ed48dfa0b) (2018-04-05 12:24)
 * MinGW GNU C 7.3 (32-bit)
 * Generated C source from "f.prg"
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"
#include "hbxvm.h"

/* ovo je indikator da je link proces problematican
void _imp____acrt_iob_func() {
   printf("-------- ne ----------------------------- iob ----------------\n");
   return;
}
*/

HB_FUNC( F1 );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_F )
{ "F1", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( F1 )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_F, "", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_F
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_F )
   #include "hbiniseg.h"
#endif

HB_FUNC( F1 )
{
   printf("starttttttttttttttttttttttttt\n");
   
   do {
	hb_xvmFrame( 0, 1 );
	hb_xvmSetLine( 3 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmMultByInt( 2L ) ) break;
	hb_xvmRetValue();
   } while( 0 );
   
   //hb_retc("X");

}

