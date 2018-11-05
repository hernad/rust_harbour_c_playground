/*
 * Harbour 3.4.6hernad (0ed48dfa0b) (2018-04-05 12:24)
 * MinGW GNU C 7.3 (32-bit)
 * Generated C source from "cli_fib_prg.prg"
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"
#include "hbxvm.h"

/*
HB_FUNC(RUST1);
HB_FUNC_EXTERN(QOUT);
HB_FUNC_EXTERN(F1);
HB_FUNC_EXTERN(F1B);
HB_FUNC_EXTERN(F1D_RUST);
HB_FUNC_EXTERN(DBF_TEST);
*/



/*
HB_INIT_SYMBOLS_BEGIN(hb_vm_SymbolInit_CLI_FIB_PRG){"MAIN", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME(MAIN)}, NULL},
	{"QOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME(QOUT)}, NULL},
	{"F1", {HB_FS_PUBLIC}, {HB_FUNCNAME(F1)}, NULL},
	{"F1B", {HB_FS_PUBLIC}, {HB_FUNCNAME(F1B)}, NULL},
	{"F1D_RUST", {HB_FS_PUBLIC}, {HB_FUNCNAME(F1D_RUST)}, NULL},
	{"DBF_TEST", {HB_FS_PUBLIC}, {HB_FUNCNAME(DBF_TEST)}, NULL} 
HB_INIT_SYMBOLS_EX_END(hb_vm_SymbolInit_CLI_FIB_PRG, "", 0x0, 0x0003)

#if defined(HB_PRAGMA_STARTUP)
#pragma startup hb_vm_SymbolInit_CLI_FIB_PRG
#elif defined(HB_DATASEG_STARTUP)
#define HB_DATASEG_BODY HB_DATASEG_FUNC(hb_vm_SymbolInit_CLI_FIB_PRG)
#include "hbiniseg.h"
#endif

*/

/*
static HB_SYMB symbols_table[] = 
{
 {"MAIN", {0x0001 | 0x0004 | 0x0200}, {HB_FUN_MAIN}, ((void *)0) },                                                                                     },
 {"QOUT", {0x0001}, {HB_FUN_QOUT},  ((void *) 0) },
 {"F1", {0x0001}, {HB_FUN_F1},  ((void *) 0) },
 {"F1B", {0x0001}, {HB_FUN_F1B}, ((void *) 0) },
 {"F1D_RUST", {0x0001}, {HB_FUN_F1D_RUST}, ((void *)0) },
 {"DBF_TEST", {0x0001}, {HB_FUN_DBF_TEST}, ((void *)0) }
}; 
*/

void HB_FUN_RUST1 ( void );
extern void HB_FUN_QOUT ( void );
extern void HB_FUN_F1 ( void );
extern void HB_FUN_F1B ( void );
extern void HB_FUN_F1D_RUST ( void );
extern void HB_FUN_DBF_TEST ( void );


static HB_SYMB symbols_table[] = {
 {"RUST1", {0x0001 | 0x0004 | 0x0200}, {HB_FUN_RUST1}, ((void *)0) },
 {"QOUT", {0x0001}, {HB_FUN_QOUT}, ((void *)0) },
 {"F1", {0x0001}, {HB_FUN_F1}, ((void *)0) },
 {"F1B", {0x0001}, {HB_FUN_F1B}, ((void *)0) },
 {"F1D_RUST", {0x0001}, {HB_FUN_F1D_RUST}, ((void *)0) },
 {"DBF_TEST", {0x0001}, {HB_FUN_DBF_TEST}, ((void *)0) }
};

static PHB_SYMB symbols = symbols_table; 

static void __attribute__ ((constructor)) hb_vm_SymbolInit_RUST1_PRG( void ) { 
	symbols = hb_vmProcessSymbols( symbols_table, ( HB_USHORT ) ( sizeof( symbols_table ) / sizeof( HB_SYMB ) ), (""), (0x0), (0x0003) ); 
}


void HB_FUN_RUST1 ( void )
{
 do
 {
  hb_xvmPushFuncSymbol(symbols + 5); // DBF_TEST
  hb_xvmPushStringConst( "12345", 5 ); // param 1 funkcije DBF_TEST
  if (hb_xvmDo(1))
   break;
 } while (0);
}




