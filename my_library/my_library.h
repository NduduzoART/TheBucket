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
#include <stddef.h>

typedef struct s_list
{
    void            *content;
    size_t          content_size;
    struct s_list   *next;
}   t_list;

/* Charecter */
int         my_tolower(int c);
int         my_toupper(int c);
int         my_isalpha(int c);
int         my_isdigit(int c);
int         my_isalnum(int c);
int         my_isprint(int c);
int         my_isascii(int c);
int         my_isspace(int c);
int         my_islower(int c);
int         my_isupper(int c);

/* Output */
void        my_putchar(char c);
void        my_putchar_fd(char c, int fd);
void        my_putnbr(int n);
void        my_putnbr_fd(int n, int fd);
void        my_putstr(char *str);
void        my_putstr_fd(char *str, int fd);
void        my_putendl(char const *s);
void        my_putendl_fd(char const *s, int fd);
void        my_putnbrendl(int n);
void        my_putnbrendl_fd(int n, int fd);

/* String */
size_t      my_strlen(char *str);
int         my_strcmp(char *s1, char *s2);
int         my_strncmp(const char *s1, const char *s2, size_t n);
char        *my_strcpy(char *dest, char *src);
char        *my_strncpy(char *dest, char *src, size_t len);
char        my_search_and_replace(char *str, char a, char b);

/* Utility */
int         my_atoi(char *str);
//char      *my_itoa(int n);
void        my_isnegative(int n);
void        my_swap(int *a, int *b);

#endif
