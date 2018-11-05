/*
 * Harbour 3.4.6hernad (0ed48dfa0b) (2018-04-05 12:24)
 * GNU C 8.1.1 (64-bit)
 * Generated C source from "src/f.prg"
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"
#include "hbxvm.h"


HB_FUNC( F );
HB_FUNC( F1 );
HB_FUNC( DBF_TEST );
HB_FUNC_EXTERN( QOUT );
HB_FUNC_EXTERN( INKEY );
HB_FUNC_EXTERN( RDDSETDEFAULT );
HB_FUNC_EXTERN( DBCREATE );
HB_FUNC_EXTERN( DBAPPEND );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( DBCOMMIT );
HB_FUNC_EXTERN( LASTREC );
HB_FUNC_EXTERN( HB_VFDIRECTORY );
HB_FUNC_EXTERN( __DBZAP );
HB_FUNC_EXTERN( DBCLOSEALL );
HB_FUNC_EXTERN( HB_DBDROP );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( DBDELETE );
HB_FUNC_EXTERN( DBGOTOP );
HB_FUNC_EXTERN( EOF );
HB_FUNC_EXTERN( RECNO );
HB_FUNC_EXTERN( DBSKIP );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( DBSETFILTER );
HB_FUNC_EXTERN( DBFILTER );
HB_FUNC_EXTERN( DBCLEARFILTER );
HB_FUNC_EXTERN( __DBPACK );
HB_FUNC_EXTERN( DBFCDX );
HB_FUNC_EXTERN( DBFFPT );
HB_FUNC_EXTERN( HB_CODEPAGE_UTF8 );
HB_FUNC_EXTERN( HB_CODEPAGE_SL852 );
HB_FUNC_EXTERN( HB_CODEPAGE_SLISO );
HB_FUNC_EXTERN( HB_CODEPAGE_SLWIN );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_F )
{ "F", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( F )}, NULL },
{ "F1", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( F1 )}, NULL },
{ "DBF_TEST", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( DBF_TEST )}, NULL },
{ "QOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( QOUT )}, NULL },
{ "INKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( INKEY )}, NULL },
{ "RDDSETDEFAULT", {HB_FS_PUBLIC}, {HB_FUNCNAME( RDDSETDEFAULT )}, NULL },
{ "DBCREATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCREATE )}, NULL },
{ "MYALIAS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "MEMO1", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "MEMO2", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "DBAPPEND", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBAPPEND )}, NULL },
{ "NUMERIC", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "DOUBLE", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "DBCOMMIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCOMMIT )}, NULL },
{ "LASTREC", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTREC )}, NULL },
{ "HB_VFDIRECTORY", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_VFDIRECTORY )}, NULL },
{ "__DBZAP", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DBZAP )}, NULL },
{ "DBCLOSEALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCLOSEALL )}, NULL },
{ "HB_DBDROP", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DBDROP )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "DBDELETE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBDELETE )}, NULL },
{ "DBGOTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBGOTOP )}, NULL },
{ "EOF", {HB_FS_PUBLIC}, {HB_FUNCNAME( EOF )}, NULL },
{ "RECNO", {HB_FS_PUBLIC}, {HB_FUNCNAME( RECNO )}, NULL },
{ "DBSKIP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSKIP )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "DBSETFILTER", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSETFILTER )}, NULL },
{ "DBFILTER", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBFILTER )}, NULL },
{ "DBCLEARFILTER", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCLEARFILTER )}, NULL },
{ "__DBPACK", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DBPACK )}, NULL },
{ "DBFCDX", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBFCDX )}, NULL },
{ "DBFFPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBFFPT )}, NULL },
{ "HB_CODEPAGE_UTF8", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_CODEPAGE_UTF8 )}, NULL },
{ "HB_CODEPAGE_SL852", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_CODEPAGE_SL852 )}, NULL },
{ "HB_CODEPAGE_SLISO", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_CODEPAGE_SLISO )}, NULL },
{ "HB_CODEPAGE_SLWIN", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_CODEPAGE_SLWIN )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_F, "", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_F
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_F )
   #include "hbiniseg.h"
#endif

HB_FUNC( F )
{
   do {
	/* *** END PROC *** */
   } while( 0 );
}

HB_FUNC( F1 )
{
   do {
	hb_xvmFrame( 0, 1 );
	hb_xvmSetLine( 7 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmMultByInt( 2L ) ) break;
	hb_xvmRetValue();
	/* *** END PROC *** */
   } while( 0 );
}

HB_FUNC( DBF_TEST )
{
   HB_BOOL fValue;
   do {
	hb_xvmFrame( 2, 0 );
	hb_xvmSetLine( 20 );
	hb_xvmPushStringConst( "CHARACTER", 9 );
	hb_xvmPushStringConst( "C", 1 );
	hb_xvmPushInteger( 25 );
	hb_xvmPushInteger( 0 );
	hb_xvmArrayGen( 4 );
	hb_xvmPushStringConst( "NUMERIC", 7 );
	hb_xvmPushStringConst( "N", 1 );
	hb_xvmPushInteger( 8 );
	hb_xvmPushInteger( 0 );
	hb_xvmArrayGen( 4 );
	hb_xvmPushStringConst( "DOUBLE", 6 );
	hb_xvmPushStringConst( "N", 1 );
	hb_xvmPushInteger( 8 );
	hb_xvmPushInteger( 2 );
	hb_xvmArrayGen( 4 );
	hb_xvmPushStringConst( "DATE", 4 );
	hb_xvmPushStringConst( "D", 1 );
	hb_xvmPushInteger( 8 );
	hb_xvmPushInteger( 0 );
	hb_xvmArrayGen( 4 );
	hb_xvmPushStringConst( "LOGICAL", 7 );
	hb_xvmPushStringConst( "L", 1 );
	hb_xvmPushInteger( 1 );
	hb_xvmPushInteger( 0 );
	hb_xvmArrayGen( 4 );
	hb_xvmPushStringConst( "MEMO1", 5 );
	hb_xvmPushStringConst( "M", 1 );
	hb_xvmPushInteger( 10 );
	hb_xvmPushInteger( 0 );
	hb_xvmArrayGen( 4 );
	hb_xvmPushStringConst( "MEMO2", 5 );
	hb_xvmPushStringConst( "M", 1 );
	hb_xvmPushInteger( 10 );
	hb_xvmPushInteger( 0 );
	hb_xvmArrayGen( 4 );
	hb_xvmArrayGen( 7 );
	hb_xvmPopLocal( 2 );
	hb_xvmSetLine( 31 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "========================= 0) START  =============================================== ", 84 );
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 32 );
	hb_xvmPushFuncSymbol( symbols + 4 );
	hb_xvmPushInteger( 10 );
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 34 );
	hb_xvmPushFuncSymbol( symbols + 5 );
	hb_xvmPushStringConst( "DBFCDX", 6 );
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 36 );
	hb_xvmPushFuncSymbol( symbols + 6 );
	hb_xvmPushStringConst( "testdbf.dbf", 11 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushStringConst( "DBFCDX", 6 );
	hb_xvmPushLogical( HB_TRUE );
	hb_xvmPushStringConst( "MYALIAS", 7 );
	if( hb_xvmDo( 5 ) ) break;
	hb_xvmSetLine( 38 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "[", 1 );
	if( hb_xvmPushAliasedFieldExt( symbols + 7, symbols + 8 ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "]", 1 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 39 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "[", 1 );
	if( hb_xvmPushAliasedFieldExt( symbols + 7, symbols + 9 ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "]", 1 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 40 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "-", 1 );
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 41 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 7 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 10 );
	if( hb_xvmDo( 0 ) ) break;
	if( hb_xvmPopAlias() ) break;
	hb_xvmSetLine( 42 );
	hb_xvmPushStringConst( "Hello world!", 12 );
	if( hb_xvmPopAliasedFieldExt( symbols + 7, symbols + 8 ) ) break;
	hb_xvmSetLine( 43 );
	hb_xvmPushStringConst( "Harbour power", 13 );
	if( hb_xvmPopAliasedFieldExt( symbols + 7, symbols + 9 ) ) break;
	hb_xvmSetLine( 44 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "[", 1 );
	if( hb_xvmPushAliasedFieldExt( symbols + 7, symbols + 8 ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "]", 1 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 45 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "[", 1 );
	if( hb_xvmPushAliasedFieldExt( symbols + 7, symbols + 9 ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "]", 1 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 46 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 7 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 10 );
	if( hb_xvmDo( 0 ) ) break;
	if( hb_xvmPopAlias() ) break;
	hb_xvmSetLine( 47 );
	hb_xvmPushStringConst( "This is a test for field MEMO1.", 31 );
	if( hb_xvmPopAliasedFieldExt( symbols + 7, symbols + 8 ) ) break;
	hb_xvmSetLine( 48 );
	hb_xvmPushStringConst( "This is a test for field MEMO2.", 31 );
	if( hb_xvmPopAliasedFieldExt( symbols + 7, symbols + 9 ) ) break;
	hb_xvmSetLine( 49 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "[", 1 );
	if( hb_xvmPushAliasedFieldExt( symbols + 7, symbols + 8 ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "]", 1 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 50 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "[", 1 );
	if( hb_xvmPushAliasedFieldExt( symbols + 7, symbols + 9 ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "]", 1 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 51 );
	hb_xvmPushInteger( 90 );
	if( hb_xvmPopAliasedFieldExt( symbols + 7, symbols + 11 ) ) break;
	hb_xvmSetLine( 52 );
	hb_xvmPushDouble( * ( double * ) "F\xB6\xF3\xFD\xD4\x08^@", 10, 3 );
	if( hb_xvmPopAliasedFieldExt( symbols + 7, symbols + 12 ) ) break;
	hb_xvmSetLine( 53 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "[", 1 );
	hb_xvmPushFuncSymbol( symbols + 13 );
	if( hb_xvmPushAliasedFieldExt( symbols + 7, symbols + 12 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "]", 1 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 54 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "[", 1 );
	hb_xvmPushFuncSymbol( symbols + 13 );
	if( hb_xvmPushAliasedFieldExt( symbols + 7, symbols + 11 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "]", 1 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 56 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	if( hb_xvmDo( 0 ) ) break;
	hb_xvmSetLine( 60 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	if( hb_xvmDo( 0 ) ) break;
	hb_xvmSetLine( 61 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "Append 50 records with memos...", 31 );
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 62 );
	hb_xvmPushInteger( 1 );
	hb_xvmPushUnRef();
	hb_xvmPopLocal( 1 );
	goto lab00002;
lab00001: ;
	hb_xvmSetLine( 63 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 7 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 10 );
	if( hb_xvmDo( 0 ) ) break;
	if( hb_xvmPopAlias() ) break;
	hb_xvmSetLine( 75 );
	hb_xvmPushStringConst( "This is a very long string. This may seem silly however strings like this are still used. Not by good programmers though, but I've seen stuff like this used for Copyright messages and other long text. What is the point to all of this you'd say. Well I am coming to the point right now, the constant string is limited to 256 characters and this string is a lot bigger. Do you get my drift \? If there is somebody who has read this line upto the very end: Esto es un sombrero grande ridiculo.\x0D\x0A/\x0D\x0A[;-)\x0D\x0A\\", 501 );
	if( hb_xvmPopAliasedFieldExt( symbols + 7, symbols + 8 ) ) break;
	hb_xvmSetLine( 62 );
	if( hb_xvmLocalIncPush( 1 ) ) break;
lab00002: ;
	if( hb_xvmGreaterThenIntIs( 50L, &fValue ) ) break;
	if( !fValue )
		goto lab00001;
	hb_xvmSetLine( 77 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 7 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 14 );
	if( hb_xvmDo( 0 ) ) break;
	if( hb_xvmPopAlias() ) break;
	hb_xvmSetLine( 79 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "Records before ZAP:", 19 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 7 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 15 );
	if( hb_xvmFunction( 0 ) ) break;
	if( hb_xvmSwapAlias() ) break;
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 82 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "Size of files (data and memo):", 30 );
	hb_xvmPushFuncSymbol( symbols + 16 );
	hb_xvmPushStringConst( "testdbf.dbf", 11 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmArrayItemPush( 1L ) ) break;
	if( hb_xvmArrayItemPush( 2L ) ) break;
	hb_xvmPushFuncSymbol( symbols + 16 );
	hb_xvmPushStringConst( "testdbf.fpt", 11 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmArrayItemPush( 1L ) ) break;
	if( hb_xvmArrayItemPush( 2L ) ) break;
	if( hb_xvmDo( 3 ) ) break;
	hb_xvmSetLine( 83 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 7 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 17 );
	if( hb_xvmDo( 0 ) ) break;
	if( hb_xvmPopAlias() ) break;
	hb_xvmSetLine( 84 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 7 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 14 );
	if( hb_xvmDo( 0 ) ) break;
	if( hb_xvmPopAlias() ) break;
	hb_xvmSetLine( 85 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "Records after ZAP:", 18 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 7 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 15 );
	if( hb_xvmFunction( 0 ) ) break;
	if( hb_xvmSwapAlias() ) break;
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 88 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "Size of files (data and memo):", 30 );
	hb_xvmPushFuncSymbol( symbols + 16 );
	hb_xvmPushStringConst( "testdbf.dbf", 11 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmArrayItemPush( 1L ) ) break;
	if( hb_xvmArrayItemPush( 2L ) ) break;
	hb_xvmPushFuncSymbol( symbols + 16 );
	hb_xvmPushStringConst( "testdbf.fpt", 11 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmArrayItemPush( 1L ) ) break;
	if( hb_xvmArrayItemPush( 2L ) ) break;
	if( hb_xvmDo( 3 ) ) break;
	hb_xvmSetLine( 89 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "Value of fields MEMO1, MEMO2, DOUBLE and NUMERIC:", 49 );
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 90 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "[", 1 );
	if( hb_xvmPushAliasedFieldExt( symbols + 7, symbols + 8 ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "]", 1 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 91 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "[", 1 );
	if( hb_xvmPushAliasedFieldExt( symbols + 7, symbols + 9 ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "]", 1 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 92 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "[", 1 );
	hb_xvmPushFuncSymbol( symbols + 13 );
	if( hb_xvmPushAliasedFieldExt( symbols + 7, symbols + 12 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "]", 1 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 93 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "[", 1 );
	hb_xvmPushFuncSymbol( symbols + 13 );
	if( hb_xvmPushAliasedFieldExt( symbols + 7, symbols + 11 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "]", 1 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 95 );
	hb_xvmPushFuncSymbol( symbols + 18 );
	if( hb_xvmDo( 0 ) ) break;
	hb_xvmSetLine( 96 );
	hb_xvmPushFuncSymbol( symbols + 19 );
	hb_xvmPushStringConst( "testdbf.dbf", 11 );
	hb_xvmPushNil();
	hb_xvmPushStringConst( "DBFCDX", 6 );
	if( hb_xvmDo( 3 ) ) break;
	hb_xvmSetLine( 100 );
	hb_xvmPushFuncSymbol( symbols + 6 );
	hb_xvmPushStringConst( "testdbf.dbf", 11 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushStringConst( "DBFCDX", 6 );
	hb_xvmPushLogical( HB_TRUE );
	hb_xvmPushStringConst( "MYALIAS", 7 );
	if( hb_xvmDo( 5 ) ) break;
	hb_xvmSetLine( 102 );
	hb_xvmPushInteger( 1 );
	hb_xvmPushUnRef();
	hb_xvmPopLocal( 1 );
	goto lab00006;
lab00003: ;
	hb_xvmSetLine( 103 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 7 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 10 );
	if( hb_xvmDo( 0 ) ) break;
	if( hb_xvmPopAlias() ) break;
	hb_xvmSetLine( 104 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmPopAliasedFieldExt( symbols + 7, symbols + 11 ) ) break;
	hb_xvmPushStringConst( "memo ", 5 );
	hb_xvmPushFuncSymbol( symbols + 20 );
	hb_xvmPushFuncSymbol( symbols + 13 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPlus() ) break;
	if( hb_xvmPopAliasedFieldExt( symbols + 7, symbols + 8 ) ) break;
	hb_xvmSetLine( 105 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "Adding a record", 15 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 106 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmEqualIntIs( 3L, &fValue ) ) break;
	if( fValue )
		goto lab00004;
	hb_xvmPushLocal( 1 );
	if( hb_xvmEqualIntIs( 7L, &fValue ) ) break;
	if( !fValue )
		goto lab00005;
lab00004: ;
	hb_xvmSetLine( 107 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 7 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 21 );
	if( hb_xvmDo( 0 ) ) break;
	if( hb_xvmPopAlias() ) break;
	hb_xvmSetLine( 108 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "Deleting record", 15 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmDo( 2 ) ) break;
lab00005: ;
	hb_xvmSetLine( 102 );
	if( hb_xvmLocalIncPush( 1 ) ) break;
lab00006: ;
	if( hb_xvmGreaterThenIntIs( 10L, &fValue ) ) break;
	if( !fValue )
		goto lab00003;
	hb_xvmSetLine( 111 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 7 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 14 );
	if( hb_xvmDo( 0 ) ) break;
	if( hb_xvmPopAlias() ) break;
	hb_xvmSetLine( 113 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	if( hb_xvmDo( 0 ) ) break;
	hb_xvmSetLine( 114 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "1) With SET DELETED OFF", 23 );
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 117 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 7 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 22 );
	if( hb_xvmDo( 0 ) ) break;
	if( hb_xvmPopAlias() ) break;
lab00007: ;
	hb_xvmSetLine( 118 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 7 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 23 );
	if( hb_xvmFunction( 0 ) ) break;
	if( hb_xvmSwapAlias() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00008;
	hb_xvmSetLine( 119 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushFuncSymbol( symbols + 24 );
	if( hb_xvmFunction( 0 ) ) break;
	hb_xvmPushStringConst( "numeric=", 8 );
	if( hb_xvmPushAliasedFieldExt( symbols + 7, symbols + 11 ) ) break;
	if( hb_xvmDo( 3 ) ) break;
	hb_xvmSetLine( 120 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 7 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 25 );
	if( hb_xvmDo( 0 ) ) break;
	if( hb_xvmPopAlias() ) break;
	goto lab00007;
lab00008: ;
	hb_xvmSetLine( 123 );
	hb_xvmPushFuncSymbol( symbols + 26 );
	hb_xvmPushInteger( 11 );
	hb_xvmPushLogical( HB_TRUE );
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 124 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	if( hb_xvmDo( 0 ) ) break;
	hb_xvmSetLine( 125 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "2) With SET DELETED ON", 22 );
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 128 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 7 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 22 );
	if( hb_xvmDo( 0 ) ) break;
	if( hb_xvmPopAlias() ) break;
lab00009: ;
	hb_xvmSetLine( 129 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 7 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 23 );
	if( hb_xvmFunction( 0 ) ) break;
	if( hb_xvmSwapAlias() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00010;
	hb_xvmSetLine( 130 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushFuncSymbol( symbols + 24 );
	if( hb_xvmFunction( 0 ) ) break;
	hb_xvmPushStringConst( "numeric/2=", 10 );
	if( hb_xvmPushAliasedFieldExt( symbols + 7, symbols + 11 ) ) break;
	if( hb_xvmDo( 3 ) ) break;
	hb_xvmSetLine( 131 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 7 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 25 );
	if( hb_xvmDo( 0 ) ) break;
	if( hb_xvmPopAlias() ) break;
	goto lab00009;
lab00010: ;
	hb_xvmSetLine( 134 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	if( hb_xvmDo( 0 ) ) break;
	hb_xvmSetLine( 135 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "With SET DELETED ON", 19 );
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 136 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "and  SET FILTER TO MYALIAS->NUMERIC > 2 .AND. MYALIAS->NUMERIC < 8", 66 );
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 140 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 7 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 27 );
	{
		static const HB_BYTE codeblock[ 19 ] = {
			108, 7, 87, 11, 92, 2, 15, 21, 28, 10, 73, 108, 7, 87, 11, 92, 
			8, 35, 6 };
		hb_xvmPushBlockShort( codeblock, symbols );
	}
	hb_xvmPushStringConst( "MYALIAS->NUMERIC > 2 .AND. MYALIAS->NUMERIC < 8", 47 );
	if( hb_xvmDo( 2 ) ) break;
	if( hb_xvmPopAlias() ) break;
	hb_xvmSetLine( 141 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 7 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 22 );
	if( hb_xvmDo( 0 ) ) break;
	if( hb_xvmPopAlias() ) break;
lab00011: ;
	hb_xvmSetLine( 142 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 7 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 23 );
	if( hb_xvmFunction( 0 ) ) break;
	if( hb_xvmSwapAlias() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00012;
	hb_xvmSetLine( 143 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	if( hb_xvmPushAliasedFieldExt( symbols + 7, symbols + 11 ) ) break;
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 144 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 7 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 25 );
	if( hb_xvmDo( 0 ) ) break;
	if( hb_xvmPopAlias() ) break;
	goto lab00011;
lab00012: ;
	hb_xvmSetLine( 147 );
	hb_xvmPushFuncSymbol( symbols + 26 );
	hb_xvmPushInteger( 11 );
	hb_xvmPushLogical( HB_FALSE );
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 148 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	if( hb_xvmDo( 0 ) ) break;
	hb_xvmSetLine( 149 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "With SET DELETED OFF", 20 );
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 150 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "and  SET FILTER TO MYALIAS->NUMERIC > 2 .AND. MYALIAS->NUMERIC < 8", 66 );
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 154 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 7 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 27 );
	{
		static const HB_BYTE codeblock[ 19 ] = {
			108, 7, 87, 11, 92, 2, 15, 21, 28, 10, 73, 108, 7, 87, 11, 92, 
			8, 35, 6 };
		hb_xvmPushBlockShort( codeblock, symbols );
	}
	hb_xvmPushStringConst( "MYALIAS->NUMERIC > 2 .AND. MYALIAS->NUMERIC < 8", 47 );
	if( hb_xvmDo( 2 ) ) break;
	if( hb_xvmPopAlias() ) break;
	hb_xvmSetLine( 155 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 7 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 22 );
	if( hb_xvmDo( 0 ) ) break;
	if( hb_xvmPopAlias() ) break;
lab00013: ;
	hb_xvmSetLine( 156 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 7 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 23 );
	if( hb_xvmFunction( 0 ) ) break;
	if( hb_xvmSwapAlias() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00014;
	hb_xvmSetLine( 157 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushFuncSymbol( symbols + 24 );
	if( hb_xvmFunction( 0 ) ) break;
	hb_xvmPushStringConst( "numeric/3", 9 );
	if( hb_xvmPushAliasedFieldExt( symbols + 7, symbols + 11 ) ) break;
	if( hb_xvmDo( 3 ) ) break;
	hb_xvmSetLine( 158 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 7 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 25 );
	if( hb_xvmDo( 0 ) ) break;
	if( hb_xvmPopAlias() ) break;
	goto lab00013;
lab00014: ;
	hb_xvmSetLine( 161 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "dbFilter() =>", 13 );
	hb_xvmPushFuncSymbol( symbols + 28 );
	if( hb_xvmFunction( 0 ) ) break;
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 162 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	if( hb_xvmDo( 0 ) ) break;
	hb_xvmSetLine( 164 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "Testing __dbPack()", 18 );
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 165 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "Records before PACK:", 20 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 7 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 15 );
	if( hb_xvmFunction( 0 ) ) break;
	if( hb_xvmSwapAlias() ) break;
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 169 );
	hb_xvmPushFuncSymbol( symbols + 29 );
	hb_xvmPushNil();
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 170 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 7 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 30 );
	if( hb_xvmDo( 0 ) ) break;
	if( hb_xvmPopAlias() ) break;
	hb_xvmSetLine( 171 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 7 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 14 );
	if( hb_xvmDo( 0 ) ) break;
	if( hb_xvmPopAlias() ) break;
	hb_xvmSetLine( 172 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "Records after PACK:", 19 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 7 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 15 );
	if( hb_xvmFunction( 0 ) ) break;
	if( hb_xvmSwapAlias() ) break;
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 177 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "Value of fields:", 16 );
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 178 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 7 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 22 );
	if( hb_xvmDo( 0 ) ) break;
	if( hb_xvmPopAlias() ) break;
lab00015: ;
	hb_xvmSetLine( 179 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 7 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 23 );
	if( hb_xvmFunction( 0 ) ) break;
	if( hb_xvmSwapAlias() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00016;
	hb_xvmSetLine( 180 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushFuncSymbol( symbols + 24 );
	if( hb_xvmFunction( 0 ) ) break;
	hb_xvmPushStringConst( "numeric/4", 9 );
	if( hb_xvmPushAliasedFieldExt( symbols + 7, symbols + 11 ) ) break;
	if( hb_xvmPushAliasedFieldExt( symbols + 7, symbols + 8 ) ) break;
	if( hb_xvmDo( 4 ) ) break;
	hb_xvmSetLine( 181 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 7 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 25 );
	if( hb_xvmDo( 0 ) ) break;
	if( hb_xvmPopAlias() ) break;
	goto lab00015;
lab00016: ;
	hb_xvmSetLine( 183 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	if( hb_xvmDo( 0 ) ) break;
	hb_xvmSetLine( 210 );
	hb_xvmPushFuncSymbol( symbols + 18 );
	if( hb_xvmDo( 0 ) ) break;
	hb_xvmSetLine( 211 );
	hb_xvmPushFuncSymbol( symbols + 19 );
	hb_xvmPushStringConst( "testdbf.dbf", 11 );
	hb_xvmPushNil();
	hb_xvmPushStringConst( "DBFCDX", 6 );
	if( hb_xvmDo( 3 ) ) break;
	hb_xvmSetLine( 213 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( ">>>>>>>>>>>>>>>>>>>>> pritisni nesto za kraj <<<<<<<<<<<<<<<<<<<<<", 66 );
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 214 );
	hb_xvmPushFuncSymbol( symbols + 4 );
	hb_xvmPushInteger( 60 );
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 215 );
	/* *** END PROC *** */
   } while( 0 );
}

