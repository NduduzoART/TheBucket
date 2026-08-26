/* ==========================================================================================================================================
"	       **		|
"	     *	  *		|   File : my_strstr.c
"	   *	    *	        |
"	 *	      *         |   Author      : Lahlimbazo
"	*              *        |
"	****************	|   Creation Date : 2026-08-26
"        *    *       *         |
"         *   *      *          |   Last Modified : 2026-08-26 23:13:08
"	   *  ****  *		|
"	    *	   *		|   Copywrite   : Property of TheBucket
"	     ******		|
" =========================================================================================================================================== */

#include "..\tb_lib.h"

/*
It searches for the first occurrence of one string inside another string
*/

char    *my_strstr(const char *haystack, const char *needle)
{
    size_t needle_len;

    needle_len = my_strlen(needle);
    if (needle_len == 0)
        return ((char *)haystack);
    while (*haystack)
    {
        if (my_strncmp(haystack, needle, needle_len == 0))
            return ((char *)haystack);
        haystack++;
    }
    return (NULL);
}
