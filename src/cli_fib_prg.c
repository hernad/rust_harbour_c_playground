/*
 * Harbour 3.4.6hernad (0ed48dfa0b) (2018-04-05 12:24)
 * MinGW GNU C 7.3 (32-bit)
 * Generated C source from "cli_fib_prg.prg"
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"
#include "hbxvm.h"


HB_FUNC( MAIN );
HB_FUNC_EXTERN( QOUT );
HB_FUNC_EXTERN( F1 );
HB_FUNC_EXTERN( F1B );
HB_FUNC_EXTERN( F1D_RUST );
HB_FUNC_EXTERN( DBF_TEST );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_CLI_FIB_PRG )
{ "MAIN", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( MAIN )}, NULL },
{ "QOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( QOUT )}, NULL },
{ "F1", {HB_FS_PUBLIC}, {HB_FUNCNAME( F1 )}, NULL },
{ "F1B", {HB_FS_PUBLIC}, {HB_FUNCNAME( F1B )}, NULL },
{ "F1D_RUST", {HB_FS_PUBLIC}, {HB_FUNCNAME( F1D_RUST )}, NULL },
{ "DBF_TEST", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBF_TEST )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_CLI_FIB_PRG, "", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_CLI_FIB_PRG
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_CLI_FIB_PRG )
   #include "hbiniseg.h"
#endif

HB_FUNC( MAIN )
{
   do {
	hb_xvmSetLine( 9 );
	hb_xvmPushFuncSymbol( symbols + 1 );
	hb_xvmPushStringConst( "poziv F1=", 9 );
	hb_xvmPushFuncSymbol( symbols + 2 );
	hb_xvmPushInteger( 2 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 10 );
	hb_xvmPushFuncSymbol( symbols + 1 );
	hb_xvmPushStringConst( "poziv F1B=", 10 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushInteger( 2 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 11 );
	hb_xvmPushFuncSymbol( symbols + 1 );
	hb_xvmPushStringConst( "poziv f1d_rust", 14 );
	hb_xvmPushFuncSymbol( symbols + 4 );
	if( hb_xvmFunction( 0 ) ) break;
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 12 );
	hb_xvmPushFuncSymbol( symbols + 1 );
	hb_xvmPushStringConst( "dbf test", 8 );
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 13 );
	hb_xvmPushFuncSymbol( symbols + 5 );
	if( hb_xvmDo( 0 ) ) break;
	hb_xvmSetLine( 17 );
	/* *** END PROC *** */
   } while( 0 );
}

