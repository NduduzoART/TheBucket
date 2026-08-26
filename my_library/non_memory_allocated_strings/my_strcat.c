/* ==========================================================================================================================================
"	       **		|
"	     *	  *		|   File : my_strcat.c
"	   *	    *	        |
"	 *	      *         |   Author      : Lahlimbazo
"	*              *        |
"	****************	|   Creation Date : 2026-08-26
"        *    *       *         |
"         *   *      *          |   Last Modified : 2026-08-26 20:31:33
"	   *  ****  *		|
"	    *	   *		|   Copywrite   : Property of TheBucket
"	     ******		|
" =========================================================================================================================================== */

#include "..\tb_lib.h"

/*
It appends src to the end of dst
*/

char    *my_strcat(char *dst, const char *src)
{
    size_t dst_len;

    dst_len = my_strlen(dst);
    my_strcpy(dst +dst_len, (char *)src);
    return (dst);
}
