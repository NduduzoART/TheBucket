/* ==========================================================================================================================================
"	       **		|
"	     *	  *		|   File : my_isascii.c
"	   *	    *	        |
"	 *	      *         |   Author      : Lahlimbazo
"	*              *        |
"	****************	|   Creation Date : 2026-08-24
"        *    *       *         |
"         *   *      *          |   Last Modified : 2026-08-26 19:40:41
"	   *  ****  *		|
"	    *	   *		|   Copywrite   : Property of TheBucket
"	     ******		|
" =========================================================================================================================================== */

#include "..\tb_lib.h"

/* checks whether a given number represents a valid ASCII charector  */

int     my_isascii(int c)
{
    if (c >= 0 && c <= 31 || my_isprint(c) || c == 127)
    {
        return (1);
    }
    return (0);
}
