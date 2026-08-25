/* ==========================================================================================================================================
"	       **		|
"	     *	  *		|   File : my_strrchr.c
"	   *	    *	        |
"	 *	      *         |   Author      : Lahlimbazo
"	*              *        |
"	****************	|   Creation Date : 2026-08-25
"        *    *       *         |
"         *   *      *          |   Last Modified : 2026-08-25 21:37:51
"	   *  ****  *		|
"	    *	   *		|   Copywrite   : Property of TheBucket
"	     ******		|
" =========================================================================================================================================== */

#include "tb_lib.h"

/*
searches for the last occurrence of a charecter
*/

char    *my_strrchr(const char *str, in c)
{
    const char *last

    last = NULL;
    while (*str)
    {
        if (*str == (char)c)
        {
            last = str;
        }
        str++;
    }
    if ((char)c == '\0')
    {
        return ((char *)str)
    }
    return ((char *)last);
}
