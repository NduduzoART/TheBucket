/* ==========================================================================================================================================
"	       **		|
"	     *	  *		|   File : my_strlcat.c
"	   *	    *	        |
"	 *	      *         |   Author      : Lahlimbazo
"	*              *        |
"	****************	|   Creation Date : 2026-08-26
"        *    *       *         |
"         *   *      *          |   Last Modified : 2026-08-26 22:44:36
"	   *  ****  *		|
"	    *	   *		|   Copywrite   : Property of TheBucket
"	     ******		|
" =========================================================================================================================================== */

#include "..\tb_lib.h"

/*
It joins one string onto the end of another, but limits the amount it writes so it stays within the destination buffer size
*/

size_t      my_strlcat(char *dst, const char *src, size_t n)
{
    size_t dst_len;
    size_t src_len;
    size_t i;

    dst_len = my_strlen(dst);
    src_len = my_strlen(src);
    i = 0;
    if (n <= dst_len)
    {
        return (n + src_len);
    }
    while (i < n - dst_len - 1 && src[i])
    {
        dst[dst_len + i] = src[i];
        i ++;
    }
    dst[dst_len + i] = '\0';
    return (dst_len + src_len);
}
