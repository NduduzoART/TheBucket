/* ==========================================================================================================================================
"	       **		|
"	     *	  *		|   File : my_strncat.c
"	   *	    *	        |
"	 *	      *         |   Author      : Lahlimbazo
"	*              *        |
"	****************	|   Creation Date : 2026-08-26
"        *    *       *         |
"         *   *      *          |   Last Modified : 2026-08-26 22:28:27
"	   *  ****  *		|
"	    *	   *		|   Copywrite   : Property of TheBucket
"	     ******		|
" =========================================================================================================================================== */

#include "..\tb_lib.h"

/*
It appends up to n characters from src to the end of dst, then adds '\0'
*/

char    *my_strncat(char *dst, const char *src, size_t n)
{
    size_t dst_len;
    size_t i;

    dst_len = my_strlen(dst);
    i = 0;
    while (i < n && src[i])
    {
        dst[dst_len + i] = src[i];
        i++;
    }
    dst[dst_len + i] = '\0';
    return (dst);
}
