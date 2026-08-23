/* 
-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
|	  *	     *		|
|	 *	      *		| File		:	my_tolower.c
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

/* takes a charector and convert it to lowercase */

int    my_tolower(int c)
{
    if (my_isalpha(c) && my_isupper(c))
    {
        return (c + 32);
    }
    return (c);
}
