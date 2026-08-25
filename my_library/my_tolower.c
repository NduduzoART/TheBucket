/* ==========================================================================================================================================
"	       **		|
"	     *	  *		|   File : my_tolower.c
"	   *	    *	        |
"	 *	      *         |   Author      : Lahlimbazo
"	*              *        |
"	****************	|   Creation Date : 2026-08-24
"        *    *       *         |
"         *   *      *          |   Last Modified : 2026-08-25 20:49:00
"	   *  ****  *		|
"	    *	   *		|   Copywrite   : Property of TheBucket
"	     ******		|
" =========================================================================================================================================== */

#include "tb_lib.h"

/* takes a charector and convert it to lowercase */

int    my_tolower(int c)
{
    if (my_isalpha(c) && my_isupper(c))
    {
        return (c + 32);
    }
    return (c);
}
