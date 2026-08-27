/* ==========================================================================================================================================
"	       **		|
"	     *	  *		|   File : my_putptr_fd.c
"	   *	    *	        |
"	 *	      *         |   Author      : Lahlimbazo
"	*              *        |
"	****************	|   Creation Date : 2026-08-27
"        *    *       *         |
"         *   *      *          |   Last Modified : 2026-08-27 21:16:32
"	   *  ****  *		|
"	    *	   *		|   Copywrite   : Property of TheBucket
"	     ******		|
" =========================================================================================================================================== */

#include "..\tb_lib.h"

/*
prints a pointer as a hexidecimal address to a specified file descripter
*/

static void    my_puthex_fd(uintptr_t n, int fd)
{
    char *base = "0123456789abcdef";

    if (n >= 16)
    {
        my_puthex_fd(n / 16, fd);
    }
    my_putchar_fd(base[n % 16], fd);
}

void    my_putptr_fd(void *ptr, int fd)
{
    uintptr_t address;

    address = (uintptr_t)ptr;
    my_putstr_fd("0x", fd);
    my_puthex_fd(address, fd);
}
