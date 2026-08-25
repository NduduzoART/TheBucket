/* ==========================================================================================================================================
"	       **		|
"	     *	  *		|   File : my_strncmp.c
"	   *	    *	        |
"	 *	      *         |   Author      : Lahlimbazo
"	*              *        |
"	****************	|   Creation Date : 2026-08-25
"        *    *       *         |
"         *   *      *          |   Last Modified : 2026-08-25 21:51:30
"	   *  ****  *		|
"	    *	   *		|   Copywrite   : Property of TheBucket
"	     ******		|
" =========================================================================================================================================== */

#include "tb_lib.h"

/*
compares strings untill it reaches a difference, stops after a specified n charecters
*/

int     strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while(i < n && s1[i] && s2[i])
    {
        if (s1[i] != s2[i])
            {
                return ((unsigned char)s1[i] - (unsigned char)s2[i]);
            }
        i++;
    }
    if (i == n)
    {
        return (0);
    }
    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
