/* ==========================================================================================================================================
"	       **		|
"	     *	  *		|   File : my_strncpy.c
"	   *	    *	        |
"	 *	      *         |   Author      : Lahlimbazo
"	*              *        |
"	****************	|   Creation Date : 2026-08-26
"        *    *       *         |
"         *   *      *          |   Last Modified : 2026-08-26 21:18:16
"	   *  ****  *		|
"	    *	   *		|   Copywrite   : Property of TheBucket
"	     ******		|
" =========================================================================================================================================== */

#include "..\tb_lib.h"

/*
copies up to n charecters from src to dst
*/

char    *my_strncpy(char *dst, const char *src, size_t n)
{
    size_t i;

    i = 0;
    while (i < n && src[i])
    {
        dst[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dst[i] = '\0';
        i++;
    }
    return (dst);
}
