#include <stdio.h>

#include "hbapi.h"
#include "hbapiitm.h"
#include "hbapicdp.h"
#include "hbapierr.h"


#include "hbvmpub.h"
#include "hbpcode.h"
//#include "hbinit.h"
#include "hbxvm.h"


/*
void _imp____acrt_iob_func() {
   printf("-------- ne ----------------------------- iob ----------------\n");
   return;
}
*/

void hello_harbour()
{
	printf("hello harbour from c/3\n");
}


void HB_FUN_F1B ( void );

extern void HB_FUN_SCROLL ( void );
extern void HB_FUN_SETPOS ( void );
extern void HB_FUN_INKEY ( void );
extern void HB_FUN_QOUT ( void );




HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_C_LIB )
//{ "MAIN", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( MAIN )}, NULL },
{ "NA", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "NB", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "SCROLL", {HB_FS_PUBLIC}, {HB_FUNCNAME( SCROLL )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
//{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
//{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
//{ "ROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( ROW )}, NULL },
//{ "COL", {HB_FS_PUBLIC}, {HB_FUNCNAME( COL )}, NULL },
//{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
//{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
//{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
//{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
//{ "ATAIL", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATAIL )}, NULL },
//{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "QOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( QOUT )}, NULL },
{ "F1B", {HB_FS_PUBLIC}, {HB_FUNCNAME( F1B )}, NULL },
{ "INKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( INKEY )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_C_LIB, "", 0x0, 0x0003 )


HB_FUNC( F1B )
//void HB_FUN_F1( void )
{
   do {
    hb_xvmFrame( 0, 1 );
    hb_xvmSetLine( 3 );
    hb_xvmPushLocal( 1 );
    if( hb_xvmMultByInt( 4L ) ) break;
    hb_xvmRetValue();

   } while( 0 );
}

char * hb_f1d() {
	do {
	hb_vmPushInteger( 5 );
	if( hb_xvmMultByInt( 2L ) ) break;
    hb_xvmRetValue();
	} while(0);

	printf("hb_f1d /2 in c_lib.c\n");
    return "==============================f1d=================";
}