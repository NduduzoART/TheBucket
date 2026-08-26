/* ==========================================================================================================================================
"	       **		|
"	     *	  *		|   File : my_putnbr_fd.c
"	   *	    *	        |
"	 *	      *         |   Author      : Lahlimbazo
"	*              *        |
"	****************	|   Creation Date : 2026-08-24
"        *    *       *         |
"         *   *      *          |   Last Modified : 2026-08-26 19:47:02
"	   *  ****  *		|
"	    *	   *		|   Copywrite   : Property of TheBucket
"	     ******		|
" =========================================================================================================================================== */

#include "..\tb_lib.h"

/*
takes an integer and a file-descriptor, then writes the number to that specific destination
*/

void    my_putnbr_fd(int n, int fd)
{

    if (n == -2147483648)
    {
        my_putstr_fd("-2147483648", fd);
        return;
    }
    if (n < 0)
    {
        my_putchar_fd('-', fd);
        n = -n;
    }
    if (n >= 10)
    {
        my_putnbr_fd(n / 10, fd);
        my_putchar_fd((n % 10) + '0', fd);
    }
}
