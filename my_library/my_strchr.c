/* ==========================================================================================================================================
"	       **		|
"	     *	  *		|   File : my_strchr.c
"	   *	    *	        |
"	 *	      *         |   Author      : Lahlimbazo
"	*              *        |
"	****************	|   Creation Date : 2026-08-25
"        *    *       *         |
"         *   *      *          |   Last Modified : 2026-08-25 21:32:59
"	   *  ****  *		|
"	    *	   *		|   Copywrite   : Property of TheBucket
"	     ******		|
" =========================================================================================================================================== */

#include "th_lib.h"

/*
searches for the first occurrence of a charecter
*/

char    *my_strchr(const char *str, int c)
{
    while (*str)
    {
        if (*str == (char)c)
        {
            return ((char *)str);
            str++;
        }
        if ((char)c == '\0')
        {
            return ((char *)str);
        }
        return (NULL);
    }
}
