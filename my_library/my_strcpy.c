/* 
-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
|	  *	     *		|
|	 *	      *		| File		:	my_strcpy.c
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

/*
makes a copy of a string
*/

char    *my_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
