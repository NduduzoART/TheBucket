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

typedef struct s_list
{
    void            *content;
    size_t          content_size;
    struct s_list   *next;
}   t_list;

/* Charecter */
int     my_tolower(int c);
int     my_toupper(int c);
int     my_isalpha(int c);
int     my_isdigit(int c);
int     my_isalnum(int c);
int     my_isprint(int c);


/* Output */
void    my_putchar(char c);
void    my_putnbr(int n);
void    my_putstr(char *str);

/* String */
int     my_strlen(char *str);
int     my_strcmp(char *s1, char *s2);
char    *my_strcpy(char *dest, char *src);

/* Number <- -> String */
int     my_atoi(char *str);
char    *my_itoa(int n);

#endif
