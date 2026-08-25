/* ==========================================================================================================================================
"	       **		|
"	     *	  *		|   File : my_toupper.c
"	   *	    *	        |
"	 *	      *         |   Author      : Lahlimbazo
"	*              *        |
"	****************	|   Creation Date : 2026-08-24
"        *    *       *         |
"         *   *      *          |   Last Modified : 2026-08-25 20:49:19
"	   *  ****  *		|
"	    *	   *		|   Copywrite   : Property of TheBucket
"	     ******		|
" =========================================================================================================================================== */

#include "tb_lib.h"

/* takes one charector and convert it to uppercase */

int    my_toupper(int c)
{
    if (my_isalpha(c) && my_islower(c))
    {
        return (c - 32);
    }

    return (c);
}
