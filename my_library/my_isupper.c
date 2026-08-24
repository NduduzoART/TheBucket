/* ==========================================================================================================================================
"	       **		|
"	     *	  *		|   File : my_isupper.c
"	   *	    *	        |
"	 *	      *         |   Author      : Lahlimbazo
"	*              *        |
"	****************	|   Creation Date : 2026-08-24
"        *    *       *         |
"         *   *      *          |   Last Modified : 2026-08-24 21:12:56
"	   *  ****  *		|
"	    *	   *		|   Copywrite   : Property of TheBucket
"	     ******		|
" =========================================================================================================================================== */

#include "my_library.h"

/*
Checks whether a charecter is an uppercase letter from A to Z
*/

int     my_isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return (1);
    }
    return (0);
}
