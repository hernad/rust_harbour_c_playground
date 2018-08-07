/*
 * Harbour 3.4.6hernad (0ed48dfa0b) (2018-04-05 12:24)
 * MinGW GNU C 7.3 (32-bit)
 * Generated C source from "f.prg"
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"
#include "hbxvm.h"


HB_FUNC( F1 );
HB_FUNC( DBF_TEST );
HB_FUNC_EXTERN( DBCREATE );
HB_FUNC_EXTERN( QOUT );
HB_FUNC_EXTERN( DBAPPEND );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( __WAIT );
HB_FUNC_EXTERN( DBCOMMIT );
HB_FUNC_EXTERN( LASTREC );
HB_FUNC_EXTERN( HB_VFDIRECTORY );
HB_FUNC_EXTERN( __DBZAP );
HB_FUNC_EXTERN( DBCLOSEALL );
HB_FUNC_EXTERN( HB_DBDROP );
HB_FUNC_EXTERN( DBDELETE );
HB_FUNC_EXTERN( DBGOTOP );
HB_FUNC_EXTERN( EOF );
HB_FUNC_EXTERN( DBSKIP );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( DBSETFILTER );
HB_FUNC_EXTERN( DBFILTER );
HB_FUNC_EXTERN( DBCLEARFILTER );
HB_FUNC_EXTERN( __DBPACK );
HB_FUNC_EXTERN( DBUSEAREA );
HB_FUNC_EXTERN( __DBLOCATE );
HB_FUNC_EXTERN( FOUND );
HB_FUNC_EXTERN( __DBCONTINUE );
HB_FUNC_EXTERN( DBFCDX );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_F )
{ "F1", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( F1 )}, NULL },
{ "DBF_TEST", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( DBF_TEST )}, NULL },
{ "DBCREATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCREATE )}, NULL },
{ "QOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( QOUT )}, NULL },
{ "MYALIAS", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "MEMO1", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "MEMO2", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "DBAPPEND", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBAPPEND )}, NULL },
{ "NUMERIC", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "DOUBLE", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "__WAIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __WAIT )}, NULL },
{ "DBCOMMIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCOMMIT )}, NULL },
{ "LASTREC", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTREC )}, NULL },
{ "HB_VFDIRECTORY", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_VFDIRECTORY )}, NULL },
{ "__DBZAP", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DBZAP )}, NULL },
{ "DBCLOSEALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCLOSEALL )}, NULL },
{ "HB_DBDROP", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DBDROP )}, NULL },
{ "DBDELETE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBDELETE )}, NULL },
{ "DBGOTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBGOTOP )}, NULL },
{ "EOF", {HB_FS_PUBLIC}, {HB_FUNCNAME( EOF )}, NULL },
{ "DBSKIP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSKIP )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "DBSETFILTER", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSETFILTER )}, NULL },
{ "DBFILTER", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBFILTER )}, NULL },
{ "DBCLEARFILTER", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCLEARFILTER )}, NULL },
{ "__DBPACK", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DBPACK )}, NULL },
{ "DBUSEAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBUSEAREA )}, NULL },
{ "__DBLOCATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DBLOCATE )}, NULL },
{ "TESTDBF", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "SALARY", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "FOUND", {HB_FS_PUBLIC}, {HB_FUNCNAME( FOUND )}, NULL },
{ "FIRST", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "LAST", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "__DBCONTINUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DBCONTINUE )}, NULL },
{ "MARRIED", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "DBFCDX", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBFCDX )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_F, "", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_F
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_F )
   #include "hbiniseg.h"
#endif

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
	hb_xvmSetLine( 21 );
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
	hb_xvmSetLine( 25 );
	hb_xvmPushFuncSymbol( symbols + 2 );
	hb_xvmPushStringConst( "testdbf.dbf", 11 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushStringConst( "DBFCDX", 6 );
	hb_xvmPushLogical( HB_TRUE );
	hb_xvmPushStringConst( "MYALIAS", 7 );
	if( hb_xvmDo( 5 ) ) break;
	hb_xvmSetLine( 27 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "[", 1 );
	if( hb_xvmPushAliasedFieldExt( symbols + 4, symbols + 5 ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "]", 1 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 28 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "[", 1 );
	if( hb_xvmPushAliasedFieldExt( symbols + 4, symbols + 6 ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "]", 1 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 29 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "-", 1 );
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 30 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 4 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 7 );
	if( hb_xvmDo( 0 ) ) break;
	if( hb_xvmPopAlias() ) break;
	hb_xvmSetLine( 31 );
	hb_xvmPushStringConst( "Hello world!", 12 );
	if( hb_xvmPopAliasedFieldExt( symbols + 4, symbols + 5 ) ) break;
	hb_xvmSetLine( 32 );
	hb_xvmPushStringConst( "Harbour power", 13 );
	if( hb_xvmPopAliasedFieldExt( symbols + 4, symbols + 6 ) ) break;
	hb_xvmSetLine( 33 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "[", 1 );
	if( hb_xvmPushAliasedFieldExt( symbols + 4, symbols + 5 ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "]", 1 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 34 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "[", 1 );
	if( hb_xvmPushAliasedFieldExt( symbols + 4, symbols + 6 ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "]", 1 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 35 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 4 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 7 );
	if( hb_xvmDo( 0 ) ) break;
	if( hb_xvmPopAlias() ) break;
	hb_xvmSetLine( 36 );
	hb_xvmPushStringConst( "This is a test for field MEMO1.", 31 );
	if( hb_xvmPopAliasedFieldExt( symbols + 4, symbols + 5 ) ) break;
	hb_xvmSetLine( 37 );
	hb_xvmPushStringConst( "This is a test for field MEMO2.", 31 );
	if( hb_xvmPopAliasedFieldExt( symbols + 4, symbols + 6 ) ) break;
	hb_xvmSetLine( 38 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "[", 1 );
	if( hb_xvmPushAliasedFieldExt( symbols + 4, symbols + 5 ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "]", 1 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 39 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "[", 1 );
	if( hb_xvmPushAliasedFieldExt( symbols + 4, symbols + 6 ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "]", 1 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 40 );
	hb_xvmPushInteger( 90 );
	if( hb_xvmPopAliasedFieldExt( symbols + 4, symbols + 8 ) ) break;
	hb_xvmSetLine( 41 );
	hb_xvmPushDouble( * ( double * ) "F\xB6\xF3\xFD\xD4\x08^@", 10, 3 );
	if( hb_xvmPopAliasedFieldExt( symbols + 4, symbols + 9 ) ) break;
	hb_xvmSetLine( 42 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "[", 1 );
	hb_xvmPushFuncSymbol( symbols + 10 );
	if( hb_xvmPushAliasedFieldExt( symbols + 4, symbols + 9 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "]", 1 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 43 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "[", 1 );
	hb_xvmPushFuncSymbol( symbols + 10 );
	if( hb_xvmPushAliasedFieldExt( symbols + 4, symbols + 8 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "]", 1 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 45 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	if( hb_xvmDo( 0 ) ) break;
	hb_xvmSetLine( 46 );
	hb_xvmPushFuncSymbol( symbols + 11 );
	if( hb_xvmDo( 0 ) ) break;
	hb_xvmSetLine( 48 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	if( hb_xvmDo( 0 ) ) break;
	hb_xvmSetLine( 49 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "Append 50 records with memos...", 31 );
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 50 );
	hb_xvmPushInteger( 1 );
	hb_xvmPushUnRef();
	hb_xvmPopLocal( 1 );
	goto lab00002;
lab00001: ;
	hb_xvmSetLine( 51 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 4 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 7 );
	if( hb_xvmDo( 0 ) ) break;
	if( hb_xvmPopAlias() ) break;
	hb_xvmSetLine( 63 );
	hb_xvmPushStringConst( "This is a very long string. This may seem silly however strings like this are still used. Not by good programmers though, but I've seen stuff like this used for Copyright messages and other long text. What is the point to all of this you'd say. Well I am coming to the point right now, the constant string is limited to 256 characters and this string is a lot bigger. Do you get my drift \? If there is somebody who has read this line upto the very end: Esto es un sombrero grande ridiculo.\x0D\x0A/\x0D\x0A[;-)\x0D\x0A\\", 501 );
	if( hb_xvmPopAliasedFieldExt( symbols + 4, symbols + 5 ) ) break;
	hb_xvmSetLine( 50 );
	if( hb_xvmLocalIncPush( 1 ) ) break;
lab00002: ;
	if( hb_xvmGreaterThenIntIs( 50L, &fValue ) ) break;
	if( !fValue )
		goto lab00001;
	hb_xvmSetLine( 65 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 4 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 12 );
	if( hb_xvmDo( 0 ) ) break;
	if( hb_xvmPopAlias() ) break;
	hb_xvmSetLine( 67 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "Records before ZAP:", 19 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 4 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 13 );
	if( hb_xvmFunction( 0 ) ) break;
	if( hb_xvmSwapAlias() ) break;
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 70 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "Size of files (data and memo):", 30 );
	hb_xvmPushFuncSymbol( symbols + 14 );
	hb_xvmPushStringConst( "testdbf.dbf", 11 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmArrayItemPush( 1L ) ) break;
	if( hb_xvmArrayItemPush( 2L ) ) break;
	hb_xvmPushFuncSymbol( symbols + 14 );
	hb_xvmPushStringConst( "testdbf.fpt", 11 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmArrayItemPush( 1L ) ) break;
	if( hb_xvmArrayItemPush( 2L ) ) break;
	if( hb_xvmDo( 3 ) ) break;
	hb_xvmSetLine( 71 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 4 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 15 );
	if( hb_xvmDo( 0 ) ) break;
	if( hb_xvmPopAlias() ) break;
	hb_xvmSetLine( 72 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 4 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 12 );
	if( hb_xvmDo( 0 ) ) break;
	if( hb_xvmPopAlias() ) break;
	hb_xvmSetLine( 73 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "Records after ZAP:", 18 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 4 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 13 );
	if( hb_xvmFunction( 0 ) ) break;
	if( hb_xvmSwapAlias() ) break;
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 76 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "Size of files (data and memo):", 30 );
	hb_xvmPushFuncSymbol( symbols + 14 );
	hb_xvmPushStringConst( "testdbf.dbf", 11 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmArrayItemPush( 1L ) ) break;
	if( hb_xvmArrayItemPush( 2L ) ) break;
	hb_xvmPushFuncSymbol( symbols + 14 );
	hb_xvmPushStringConst( "testdbf.fpt", 11 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmArrayItemPush( 1L ) ) break;
	if( hb_xvmArrayItemPush( 2L ) ) break;
	if( hb_xvmDo( 3 ) ) break;
	hb_xvmSetLine( 77 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "Value of fields MEMO1, MEMO2, DOUBLE and NUMERIC:", 49 );
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 78 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "[", 1 );
	if( hb_xvmPushAliasedFieldExt( symbols + 4, symbols + 5 ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "]", 1 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 79 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "[", 1 );
	if( hb_xvmPushAliasedFieldExt( symbols + 4, symbols + 6 ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "]", 1 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 80 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "[", 1 );
	hb_xvmPushFuncSymbol( symbols + 10 );
	if( hb_xvmPushAliasedFieldExt( symbols + 4, symbols + 9 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "]", 1 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 81 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "[", 1 );
	hb_xvmPushFuncSymbol( symbols + 10 );
	if( hb_xvmPushAliasedFieldExt( symbols + 4, symbols + 8 ) ) break;
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmPlus() ) break;
	hb_xvmPushStringConst( "]", 1 );
	if( hb_xvmPlus() ) break;
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 82 );
	hb_xvmPushFuncSymbol( symbols + 11 );
	if( hb_xvmDo( 0 ) ) break;
	hb_xvmSetLine( 83 );
	hb_xvmPushFuncSymbol( symbols + 16 );
	if( hb_xvmDo( 0 ) ) break;
	hb_xvmSetLine( 84 );
	hb_xvmPushFuncSymbol( symbols + 17 );
	hb_xvmPushStringConst( "testdbf.dbf", 11 );
	hb_xvmPushNil();
	hb_xvmPushStringConst( "DBFCDX", 6 );
	if( hb_xvmDo( 3 ) ) break;
	hb_xvmSetLine( 86 );
	hb_xvmPushFuncSymbol( symbols + 2 );
	hb_xvmPushStringConst( "testdbf.dbf", 11 );
	hb_xvmPushLocal( 2 );
	hb_xvmPushNil();
	hb_xvmPushLogical( HB_TRUE );
	hb_xvmPushStringConst( "MYALIAS", 7 );
	if( hb_xvmDo( 5 ) ) break;
	hb_xvmSetLine( 88 );
	hb_xvmPushInteger( 1 );
	hb_xvmPushUnRef();
	hb_xvmPopLocal( 1 );
	goto lab00006;
lab00003: ;
	hb_xvmSetLine( 89 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 4 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 7 );
	if( hb_xvmDo( 0 ) ) break;
	if( hb_xvmPopAlias() ) break;
	hb_xvmSetLine( 90 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmPopAliasedFieldExt( symbols + 4, symbols + 8 ) ) break;
	hb_xvmSetLine( 91 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "Adding a record", 15 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 92 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmEqualIntIs( 3L, &fValue ) ) break;
	if( fValue )
		goto lab00004;
	hb_xvmPushLocal( 1 );
	if( hb_xvmEqualIntIs( 7L, &fValue ) ) break;
	if( !fValue )
		goto lab00005;
lab00004: ;
	hb_xvmSetLine( 93 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 4 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 18 );
	if( hb_xvmDo( 0 ) ) break;
	if( hb_xvmPopAlias() ) break;
	hb_xvmSetLine( 94 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "Deleting record", 15 );
	hb_xvmPushLocal( 1 );
	if( hb_xvmDo( 2 ) ) break;
lab00005: ;
	hb_xvmSetLine( 88 );
	if( hb_xvmLocalIncPush( 1 ) ) break;
lab00006: ;
	if( hb_xvmGreaterThenIntIs( 10L, &fValue ) ) break;
	if( !fValue )
		goto lab00003;
	hb_xvmSetLine( 97 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 4 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 12 );
	if( hb_xvmDo( 0 ) ) break;
	if( hb_xvmPopAlias() ) break;
	hb_xvmSetLine( 99 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	if( hb_xvmDo( 0 ) ) break;
	hb_xvmSetLine( 100 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "With SET DELETED OFF", 20 );
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 101 );
	hb_xvmPushFuncSymbol( symbols + 11 );
	if( hb_xvmDo( 0 ) ) break;
	hb_xvmSetLine( 103 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 4 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 19 );
	if( hb_xvmDo( 0 ) ) break;
	if( hb_xvmPopAlias() ) break;
lab00007: ;
	hb_xvmSetLine( 104 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 4 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 20 );
	if( hb_xvmFunction( 0 ) ) break;
	if( hb_xvmSwapAlias() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00008;
	hb_xvmSetLine( 105 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	if( hb_xvmPushAliasedFieldExt( symbols + 4, symbols + 8 ) ) break;
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 106 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 4 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 21 );
	if( hb_xvmDo( 0 ) ) break;
	if( hb_xvmPopAlias() ) break;
	goto lab00007;
lab00008: ;
	hb_xvmSetLine( 109 );
	hb_xvmPushFuncSymbol( symbols + 22 );
	hb_xvmPushInteger( 11 );
	hb_xvmPushLogical( HB_TRUE );
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 110 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	if( hb_xvmDo( 0 ) ) break;
	hb_xvmSetLine( 111 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "With SET DELETED ON", 19 );
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 112 );
	hb_xvmPushFuncSymbol( symbols + 11 );
	if( hb_xvmDo( 0 ) ) break;
	hb_xvmSetLine( 114 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 4 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 19 );
	if( hb_xvmDo( 0 ) ) break;
	if( hb_xvmPopAlias() ) break;
lab00009: ;
	hb_xvmSetLine( 115 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 4 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 20 );
	if( hb_xvmFunction( 0 ) ) break;
	if( hb_xvmSwapAlias() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00010;
	hb_xvmSetLine( 116 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	if( hb_xvmPushAliasedFieldExt( symbols + 4, symbols + 8 ) ) break;
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 117 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 4 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 21 );
	if( hb_xvmDo( 0 ) ) break;
	if( hb_xvmPopAlias() ) break;
	goto lab00009;
lab00010: ;
	hb_xvmSetLine( 120 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	if( hb_xvmDo( 0 ) ) break;
	hb_xvmSetLine( 121 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "With SET DELETED ON", 19 );
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 122 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "and  SET FILTER TO MYALIAS->NUMERIC > 2 .AND. MYALIAS->NUMERIC < 8", 66 );
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 123 );
	hb_xvmPushFuncSymbol( symbols + 11 );
	if( hb_xvmDo( 0 ) ) break;
	hb_xvmSetLine( 126 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 4 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 23 );
	{
		static const HB_BYTE codeblock[ 19 ] = {
			108, 4, 87, 8, 92, 2, 15, 21, 28, 10, 73, 108, 4, 87, 8, 92, 
			8, 35, 6 };
		hb_xvmPushBlockShort( codeblock, symbols );
	}
	hb_xvmPushStringConst( "MYALIAS->NUMERIC > 2 .AND. MYALIAS->NUMERIC < 8", 47 );
	if( hb_xvmDo( 2 ) ) break;
	if( hb_xvmPopAlias() ) break;
	hb_xvmSetLine( 127 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 4 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 19 );
	if( hb_xvmDo( 0 ) ) break;
	if( hb_xvmPopAlias() ) break;
lab00011: ;
	hb_xvmSetLine( 128 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 4 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 20 );
	if( hb_xvmFunction( 0 ) ) break;
	if( hb_xvmSwapAlias() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00012;
	hb_xvmSetLine( 129 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	if( hb_xvmPushAliasedFieldExt( symbols + 4, symbols + 8 ) ) break;
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 130 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 4 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 21 );
	if( hb_xvmDo( 0 ) ) break;
	if( hb_xvmPopAlias() ) break;
	goto lab00011;
lab00012: ;
	hb_xvmSetLine( 133 );
	hb_xvmPushFuncSymbol( symbols + 22 );
	hb_xvmPushInteger( 11 );
	hb_xvmPushLogical( HB_FALSE );
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 134 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	if( hb_xvmDo( 0 ) ) break;
	hb_xvmSetLine( 135 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "With SET DELETED OFF", 20 );
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 136 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "and  SET FILTER TO MYALIAS->NUMERIC > 2 .AND. MYALIAS->NUMERIC < 8", 66 );
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 137 );
	hb_xvmPushFuncSymbol( symbols + 11 );
	if( hb_xvmDo( 0 ) ) break;
	hb_xvmSetLine( 140 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 4 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 23 );
	{
		static const HB_BYTE codeblock[ 19 ] = {
			108, 4, 87, 8, 92, 2, 15, 21, 28, 10, 73, 108, 4, 87, 8, 92, 
			8, 35, 6 };
		hb_xvmPushBlockShort( codeblock, symbols );
	}
	hb_xvmPushStringConst( "MYALIAS->NUMERIC > 2 .AND. MYALIAS->NUMERIC < 8", 47 );
	if( hb_xvmDo( 2 ) ) break;
	if( hb_xvmPopAlias() ) break;
	hb_xvmSetLine( 141 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 4 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 19 );
	if( hb_xvmDo( 0 ) ) break;
	if( hb_xvmPopAlias() ) break;
lab00013: ;
	hb_xvmSetLine( 142 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 4 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 20 );
	if( hb_xvmFunction( 0 ) ) break;
	if( hb_xvmSwapAlias() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00014;
	hb_xvmSetLine( 143 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	if( hb_xvmPushAliasedFieldExt( symbols + 4, symbols + 8 ) ) break;
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 144 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 4 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 21 );
	if( hb_xvmDo( 0 ) ) break;
	if( hb_xvmPopAlias() ) break;
	goto lab00013;
lab00014: ;
	hb_xvmSetLine( 147 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "dbFilter() =>", 13 );
	hb_xvmPushFuncSymbol( symbols + 24 );
	if( hb_xvmFunction( 0 ) ) break;
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 148 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	if( hb_xvmDo( 0 ) ) break;
	hb_xvmSetLine( 150 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "Testing __dbPack()", 18 );
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 151 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "Records before PACK:", 20 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 4 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 13 );
	if( hb_xvmFunction( 0 ) ) break;
	if( hb_xvmSwapAlias() ) break;
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 154 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "Size of files (data and memo):", 30 );
	hb_xvmPushFuncSymbol( symbols + 14 );
	hb_xvmPushStringConst( "testdbf.dbf", 11 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmArrayItemPush( 1L ) ) break;
	if( hb_xvmArrayItemPush( 2L ) ) break;
	hb_xvmPushFuncSymbol( symbols + 14 );
	hb_xvmPushStringConst( "testdbf.dbt", 11 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmArrayItemPush( 1L ) ) break;
	if( hb_xvmArrayItemPush( 2L ) ) break;
	if( hb_xvmDo( 3 ) ) break;
	hb_xvmSetLine( 155 );
	hb_xvmPushFuncSymbol( symbols + 25 );
	hb_xvmPushNil();
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 156 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 4 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 26 );
	if( hb_xvmDo( 0 ) ) break;
	if( hb_xvmPopAlias() ) break;
	hb_xvmSetLine( 157 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 4 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 12 );
	if( hb_xvmDo( 0 ) ) break;
	if( hb_xvmPopAlias() ) break;
	hb_xvmSetLine( 158 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "Records after PACK:", 19 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 4 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 13 );
	if( hb_xvmFunction( 0 ) ) break;
	if( hb_xvmSwapAlias() ) break;
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 161 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "Size of files (data and memo):", 30 );
	hb_xvmPushFuncSymbol( symbols + 14 );
	hb_xvmPushStringConst( "testdbf.dbf", 11 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmArrayItemPush( 1L ) ) break;
	if( hb_xvmArrayItemPush( 2L ) ) break;
	hb_xvmPushFuncSymbol( symbols + 14 );
	hb_xvmPushStringConst( "testdbf.dbt", 11 );
	if( hb_xvmFunction( 1 ) ) break;
	if( hb_xvmArrayItemPush( 1L ) ) break;
	if( hb_xvmArrayItemPush( 2L ) ) break;
	if( hb_xvmDo( 3 ) ) break;
	hb_xvmSetLine( 162 );
	hb_xvmPushFuncSymbol( symbols + 11 );
	if( hb_xvmDo( 0 ) ) break;
	hb_xvmSetLine( 163 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "Value of fields:", 16 );
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 164 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 4 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 19 );
	if( hb_xvmDo( 0 ) ) break;
	if( hb_xvmPopAlias() ) break;
lab00015: ;
	hb_xvmSetLine( 165 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 4 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 20 );
	if( hb_xvmFunction( 0 ) ) break;
	if( hb_xvmSwapAlias() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00016;
	hb_xvmSetLine( 166 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	if( hb_xvmPushAliasedFieldExt( symbols + 4, symbols + 8 ) ) break;
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 167 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 4 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 21 );
	if( hb_xvmDo( 0 ) ) break;
	if( hb_xvmPopAlias() ) break;
	goto lab00015;
lab00016: ;
	hb_xvmSetLine( 169 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	if( hb_xvmDo( 0 ) ) break;
	hb_xvmSetLine( 171 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "Open test.dbf and LOCATE FOR TESTDBF->SALARY > 145000", 53 );
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 172 );
	hb_xvmPushFuncSymbol( symbols + 11 );
	if( hb_xvmDo( 0 ) ) break;
	hb_xvmSetLine( 173 );
	hb_xvmPushFuncSymbol( symbols + 27 );
	hb_xvmPushNil();
	hb_xvmPushNil();
	hb_xvmPushStringConst( "test.dbf", 8 );
	hb_xvmPushStringConst( "TESTDBF", 7 );
	if( hb_xvmDo( 4 ) ) break;
	hb_xvmSetLine( 174 );
	hb_xvmPushFuncSymbol( symbols + 28 );
	{
		static const HB_BYTE codeblock[ 11 ] = {
			108, 29, 87, 30, 97, 104, 54, 2, 0, 15, 6 };
		hb_xvmPushBlockShort( codeblock, symbols );
	}
	hb_xvmPushNil();
	hb_xvmPushNil();
	hb_xvmPushNil();
	hb_xvmPushLogical( HB_FALSE );
	if( hb_xvmDo( 5 ) ) break;
lab00017: ;
	hb_xvmSetLine( 175 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 29 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 31 );
	if( hb_xvmFunction( 0 ) ) break;
	if( hb_xvmSwapAlias() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00018;
	hb_xvmSetLine( 176 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	if( hb_xvmPushAliasedFieldExt( symbols + 29, symbols + 32 ) ) break;
	if( hb_xvmPushAliasedFieldExt( symbols + 29, symbols + 33 ) ) break;
	if( hb_xvmPushAliasedFieldExt( symbols + 29, symbols + 30 ) ) break;
	if( hb_xvmDo( 3 ) ) break;
	hb_xvmSetLine( 177 );
	hb_xvmPushFuncSymbol( symbols + 34 );
	if( hb_xvmDo( 0 ) ) break;
	goto lab00017;
lab00018: ;
	hb_xvmSetLine( 179 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	if( hb_xvmDo( 0 ) ) break;
	hb_xvmSetLine( 180 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	hb_xvmPushStringConst( "LOCATE FOR TESTDBF->MARRIED .AND. TESTDBF->FIRST > 'S'", 54 );
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 181 );
	hb_xvmPushFuncSymbol( symbols + 11 );
	if( hb_xvmDo( 0 ) ) break;
	hb_xvmSetLine( 182 );
	hb_xvmPushFuncSymbol( symbols + 27 );
	hb_xvmPushNil();
	hb_xvmPushNil();
	hb_xvmPushStringConst( "test.dbf", 8 );
	hb_xvmPushStringConst( "TESTDBF", 7 );
	if( hb_xvmDo( 4 ) ) break;
	hb_xvmSetLine( 183 );
	hb_xvmPushFuncSymbol( symbols + 28 );
	{
		static const HB_BYTE codeblock[ 18 ] = {
			108, 29, 87, 35, 21, 28, 12, 73, 108, 29, 87, 32, 106, 2, 83, 0, 
			15, 6 };
		hb_xvmPushBlockShort( codeblock, symbols );
	}
	hb_xvmPushNil();
	hb_xvmPushNil();
	hb_xvmPushNil();
	hb_xvmPushLogical( HB_FALSE );
	if( hb_xvmDo( 5 ) ) break;
lab00019: ;
	hb_xvmSetLine( 184 );
	if( hb_xvmPushAlias() ) break;
	hb_xvmPushSymbol( symbols + 29 );
	if( hb_xvmPopAlias() ) break;
	hb_xvmPushFuncSymbol( symbols + 31 );
	if( hb_xvmFunction( 0 ) ) break;
	if( hb_xvmSwapAlias() ) break;
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( ! fValue )
		goto lab00020;
	hb_xvmSetLine( 185 );
	hb_xvmPushFuncSymbol( symbols + 3 );
	if( hb_xvmPushAliasedFieldExt( symbols + 29, symbols + 32 ) ) break;
	if( hb_xvmPushAliasedFieldExt( symbols + 29, symbols + 33 ) ) break;
	if( hb_xvmPushAliasedFieldExt( symbols + 29, symbols + 35 ) ) break;
	if( hb_xvmDo( 3 ) ) break;
	hb_xvmSetLine( 186 );
	hb_xvmPushFuncSymbol( symbols + 34 );
	if( hb_xvmDo( 0 ) ) break;
	goto lab00019;
lab00020: ;
	hb_xvmSetLine( 189 );
	hb_xvmPushFuncSymbol( symbols + 16 );
	if( hb_xvmDo( 0 ) ) break;
	hb_xvmSetLine( 190 );
	hb_xvmPushFuncSymbol( symbols + 17 );
	hb_xvmPushStringConst( "testdbf.dbf", 11 );
	if( hb_xvmDo( 1 ) ) break;
	hb_xvmSetLine( 192 );
	/* *** END PROC *** */
   } while( 0 );
}

