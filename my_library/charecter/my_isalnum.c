/* ==========================================================================================================================================
"	       **		|
"	     *	  *		|   File : my_isalnum.c
"	   *	    *	        |
"	 *	      *         |   Author      : Lahlimbazo
"	*              *        |
"	****************	|   Creation Date : 2026-08-24
"        *    *       *         |
"         *   *      *          |   Last Modified : 2026-08-26 19:39:51
"	   *  ****  *		|
"	    *	   *		|   Copywrite   : Property of TheBucket
"	     ******		|
" =========================================================================================================================================== */

#include "..\tb_lib.h"

/* check whether a charecter is alphabetic or numeric */

int     my_isalnum(int c)
{
    if (my_isalpha(c) || my_isdigit(c))
    {
        return (1);
    }
    return (0);
}
