/* ==========================================================================================================================================
"	       **		|
"	     *	  *		|   File : my_search_and_replace.c
"	   *	    *	        |
"	 *	      *         |   Author      : Lahlimbazo
"	*              *        |
"	****************	|   Creation Date : 2026-08-26
"        *    *       *         |
"         *   *      *          |   Last Modified : 2026-08-26 22:22:27
"	   *  ****  *		|
"	    *	   *		|   Copywrite   : Property of TheBucket
"	     ******		|
" =========================================================================================================================================== */

#include "..\tb_lib.h"

/*
It searches through src and replaces every occurence of charecter a with charecter b.
*/

char    my_search_and_replace(char *str, char a, char b)
{
    size_t i;

    i = 0;
    while (str[i])
    {
        if (str[i] == a)
            str[i] == b;
        i++;
    }
    return (b);
}
