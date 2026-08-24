/* ==========================================================================================================================================
"	       **		|
"	     *	  *		|   File : my_atoi.c
"	   *	    *	        |
"	 *	      *         |   Author      : Lahlimbazo
"	*              *        |
"	****************	|   Creation Date : 2026-08-24
"        *    *       *         |
"         *   *      *          |   Last Modified : 2026-08-24 21:07:50
"	   *  ****  *		|
"	    *	   *		|   Copywrite   : Property of TheBucket
"	     ******		|
" =========================================================================================================================================== */

#include "my_library.h"

/* Converts a string to an integer */

int     my_atoi(char *str)
{
    int i = 0;
    int sign = 1;
    int result = 0;

    /* Skip whitespace */
    while (str[i] == ' ' || str[i] == '\n' || str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
        {
            i++;
        }

    /* Handle sign */
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
        {
            sign = -1;
        }
        i++;
    }

    /* Convert digits */
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return (result * sign);
}
