/* ==========================================================================================================================================
"	       **		|
"	     *	  *		|   File : my_strnstr.c
"	   *	    *	        |
"	 *	      *         |   Author      : Lahlimbazo
"	*              *        |
"	****************	|   Creation Date : 2026-08-26
"        *    *       *         |
"         *   *      *          |   Last Modified : 2026-08-26 23:26:53
"	   *  ****  *		|
"	    *	   *		|   Copywrite   : Property of TheBucket
"	     ******		|
" =========================================================================================================================================== */

#include "..\tb_lib.h"

/*
It searches for the first occurence of needle within the first n charecters of haystack
*/

char    *my_strnstr(const char *haystack, const char *needle, size_t n)
{
    size_t needle_len;
    size_t i;

    needle_len = my_strlen(needle);
    i = 0;
    if (needle_len == 0)
    {
        return ((char *)haystack);
    }
    while (i + needle_len <= n && haystack[i])
    {
        if (my_strncmp(haystack + i, needle, needle_len) == 0)
        {
            return ((char *)(haystack + i));
        }
        i++;
    }
    return (NULL);
}
