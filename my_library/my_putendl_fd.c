/* ==========================================================================================================================================
"	       **		|
"	     *	  *		|   File : my_putendl_fd.c
"	   *	    *	        |
"	 *	      *         |   Author      : Lahlimbazo
"	*              *        |
"	****************	|   Creation Date : 2026-08-24
"        *    *       *         |
"         *   *      *          |   Last Modified : 2026-08-24 21:02:49
"	   *  ****  *		|
"	    *	   *		|   Copywrite   : Property of TheBucket
"	     ******		|
" =========================================================================================================================================== */

#include "my_library.h"

/*
prints a string followed by a newline to the specified file descriptor
*/

void    my_putendl(const char *s, int fd)
{
    my_putstr_fd(s, fd);
    my_putchar_fd('\n', fd);
}
