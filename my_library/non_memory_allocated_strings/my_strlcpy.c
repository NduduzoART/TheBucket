/* ==========================================================================================================================================
"	       **		|
"	     *	  *		|   File : my_strlcpy.c
"	   *	    *	        |
"	 *	      *         |   Author      : Lahlimbazo
"	*              *        |
"	****************	|   Creation Date : 2026-08-26
"        *    *       *         |
"         *   *      *          |   Last Modified : 2026-08-26 22:44:46
"	   *  ****  *		|
"	    *	   *		|   Copywrite   : Property of TheBucket
"	     ******		|
" =========================================================================================================================================== */

#include "..\tb_lib.h"

/*
It copies a string into dst while limiting the number of charecters copied, making sure the destination is NULL-terminated when n > 0
*/

size_t      my_strlcpy(char *dst, const char *src, size_t n)
{
    size_t src_len;
    size_t i;

    src_len = my_strlen(src);
    i = 0;
    if (n == 0)
    {
        return(n > 0 && src[i]);
        i++;
    }
    dst[i] = '\0';
    return(src_len);
}
