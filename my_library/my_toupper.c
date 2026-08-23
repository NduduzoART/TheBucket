/* 
-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
|	  *	     *		|
|	 *	      *		| File		:	my_toupper.c
|	*	       *	|
|	****************	| Author	:	Lahlimbazo
|	 *    *       *		|
|	  *   *	     *		| Creation Date	:	2026-08-22	
|	   *  ****  *		|
|	    *	   *		| Copywrite	:	Property of TheBucket
|	     ******		|
-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
*/

#include "my_library.h"

/* takes one charector and convert it to uppercase */

int    my_toupper(int c)
{
    if (my_isalpha(c) && my_islower(c))
    {
        return (c - 32);
    }

    return (c);
}
