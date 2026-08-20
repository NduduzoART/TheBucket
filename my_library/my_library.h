/* 
-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
|	  *	     *		|
|	 *	      *		| File		:	my_library.h
|	*	       *	|
|	****************	| Author	:	Lahlimbazo
|	 *    *       *		|
|	  *   *	     *		| Creation Date	:	2026-08-20	
|	   *  ****  *		|
|	    *	   *		| Copywrite	:	Property of TheBucket
|	     ******		|
-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
*/

#ifndef MY_LIBRARY_H
#define MY_LIBRARY_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void    my_putchar(char c);
void    my_putstr(char *str);
int     my_strlen(char *str);
int     my_strcmp(char *s1, char *s2);
char    *my_strcpy(char *dest, char *src);
int     my_atoi(char *str);
char    *my_itoa(int n);
int     my_printf(const char *format, ...);

#endif
