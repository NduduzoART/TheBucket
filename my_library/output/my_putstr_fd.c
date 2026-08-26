/* ==========================================================================================================================================
"	       **		|
"	     *	  *		|   File : my_putstr_fd.c
"	   *	    *	        |
"	 *	      *         |   Author      : Lahlimbazo
"	*              *        |
"	****************	|   Creation Date : 2026-08-24
"        *    *       *         |
"         *   *      *          |   Last Modified : 2026-08-26 19:43:48
"	   *  ****  *		|
"	    *	   *		|   Copywrite   : Property of TheBucket
"	     ******		|
" =========================================================================================================================================== */

#include "..\tb_lib.h"

/*
it write an entire string to the specified file destriptor
*/

void    my_putstr_fd(const char *str, int fd)
{
    while (*str)
    {
        my_putchar_fd(*str, fd);
        str++;
    }
}
