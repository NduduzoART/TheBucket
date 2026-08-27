/* ==========================================================================================================================================
"	       **		|
"	     *	  *		|   File : my_puthex_upper.c
"	   *	    *	        |
"	 *	      *         |   Author      : Lahlimbazo
"	*              *        |
"	****************	|   Creation Date : 2026-08-27
"        *    *       *         |
"         *   *      *          |   Last Modified : 2026-08-27 21:18:45
"	   *  ****  *		|
"	    *	   *		|   Copywrite   : Property of TheBucket
"	     ******		|
" =========================================================================================================================================== */

#include "..\tb_lib.h"

/*
prints an unsigned integer in uppercase hexadecimal format (base 16)
*/

void    my_puthex_upper(unsigned int n)
{
    char *base = "0123456789ABCDEF";

    if (n >= 16)
    {
        my_puthex_upper(n / 16);
    }
    my_putchar((base[n % 16]));
}
