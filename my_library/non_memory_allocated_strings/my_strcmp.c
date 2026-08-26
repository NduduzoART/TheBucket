/* ==========================================================================================================================================
"	       **		|
"	     *	  *		|   File : my_strcmp.c
"	   *	    *	        |
"	 *	      *         |   Author      : Lahlimbazo
"	*              *        |
"	****************	|   Creation Date : 2026-08-24
"        *    *       *         |
"         *   *      *          |   Last Modified : 2026-08-26 23:42:32
"	   *  ****  *		|
"	    *	   *		|   Copywrite   : Property of TheBucket
"	     ******		|
" =========================================================================================================================================== */

#include "..\tb_lib.h"

/*
For comparing two strings, character by character
*/

int     my_strcmp(const char *s1, const char *s2)
{
    size_t i = 0;

    while (s1[i] == s2[i] && s1[i] != '\0')
    {
        i++;
    }
    return (s1[i] - s2[i]);
}
