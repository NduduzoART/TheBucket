/* ==========================================================================================================================================
"	       **		|
"	     *	  *		|   File : my_puthex_lower.c
"	   *	    *	        |
"	 *	      *         |   Author      : Lahlimbazo
"	*              *        |
"	****************	|   Creation Date : 2026-08-27
"        *    *       *         |
"         *   *      *          |   Last Modified : 2026-08-27 21:18:16
"	   *  ****  *		|
"	    *	   *		|   Copywrite   : Property of TheBucket
"	     ******		|
" =========================================================================================================================================== */

#include "..\tb_lib.h"

/*
prints an unsigned integer in lowercase hexadecimal format (base 16)
*/

void    my_puthex_lower(unsigned int n)
{
    char *base = "0123456789abcdef";

    if (n >= 16)
    {
        my_puthex_lower(n / 16);
    }
    my_putchar(base[n % 16]);
}
