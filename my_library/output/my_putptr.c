/* ==========================================================================================================================================
"	       **		|
"	     *	  *		|   File : my_putptr.c
"	   *	    *	        |
"	 *	      *         |   Author      : Lahlimbazo
"	*              *        |
"	****************	|   Creation Date : 2026-08-27
"        *    *       *         |
"         *   *      *          |   Last Modified : 2026-08-27 21:15:54
"	   *  ****  *		|
"	    *	   *		|   Copywrite   : Property of TheBucket
"	     ******		|
" =========================================================================================================================================== */

#include "..\tb_lib.h"

/*

*/

static void    my_puthex(uintptr_t n)
{
    char *base = "0123456789abcdef";

    if (n >= 16)
    {
        my_puthex(n / 16);
    }
    my_putchar(base[n % 16]);
}

void    my_putptr(void *ptr)
{
    uintptr_t address;

    address = (uintptr_t)ptr;
    my_putstr("0x");
    my_puthex(address);
}
