/* ==========================================================================================================================================
"	       **		|
"	     *	  *		|   File : my_putnbr.c
"	   *	    *	        |
"	 *	      *         |   Author      : Lahlimbazo
"	*              *        |
"	****************	|   Creation Date : 2026-08-24
"        *    *       *         |
"         *   *      *          |   Last Modified : 2026-08-25 20:42:39
"	   *  ****  *		|
"	    *	   *		|   Copywrite   : Property of TheBucket
"	     ******		|
" =========================================================================================================================================== */

#include "tb_lib.h"

/*
prints a number
*/
void    my_putnbr(int n)
{
    if (n == -2147483648)
    {
        my_putchar('-');
        my_putchar('2');
        my_putchar('1');
        my_putchar('4');
        my_putchar('7');
        my_putchar('4');
        my_putchar('8');
        my_putchar('3');
        my_putchar('6');
        my_putchar('4');
        my_putchar('8');
    }
    if (n < 0)
    {
        my_putchar('-');
        n = -n;
    }
    if (n >= 10)
        my_putnbr(n / 10);
    my_putchar((n % 10) + '0');
}
