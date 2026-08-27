/* ==========================================================================================================================================
"	       **		|
"	     *	  *		|   File : tb_lib.h
"	   *	    *	        |
"	 *	      *         |   Author      : Lahlimbazo
"	*              *        |
"	****************	|   Creation Date : 2026-08-25
"        *    *       *         |
"         *   *      *          |   Last Modified : 2026-08-25 20:29:14
"	   *  ****  *		|
"	    *	   *		|   Copywrite   : Property of TheBucket
"	     ******		|
" =========================================================================================================================================== */

#ifndef TB_LIB_H
#define TB_LIB_H

#include <unistd.h>
#include <stddef.h>
#include <stdint.h>
/*
typedef struct s_list
{
    void            *content;
    size_t          content_size;
    struct s_list   *next;
}   t_list;
*/
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
void        my_putnbr(int n);
void        my_putstr(const char *str);
void        my_puts(const char *s);
void        my_putunbr(unsigned int n);
void        my_puthex_lower(unsigned int n);
void        my_puthex_upper(unsigned int n);
void        my_putptr(void *ptr);

/* Output to a specific file descripter */
void        my_putchar_fd(char c, int fd);
void        my_putnbr_fd(int n, int fd);
void        my_putstr_fd(const char *str, int fd);
void        my_puts_fd(const char *s, int fd);
void        my_putunbr_fd(unsigned int n, int fd);
void        my_puthex_lower_fd(unsigned int n, int fd);
void        my_puthex_upper_fd(unsigned int n, int fd);
void        my_putptr_fd(void *ptr, int fd);

/* Non Memory Allocated Strings */
size_t      my_strlen(const char *str);
int         my_strcmp(const char *s1, const char *s2);
int         my_strncmp(const char *s1, const char *s2, size_t n);
char        *my_strcpy(char *dst, const char *src);
char        *my_strncpy(char *dst, const char *src, size_t n);
size_t      my_strlcpy(char *dst, const char *src, size_t n);
char        *my_strcat(char *dst, const char *src);
char        *my_strncat(char *dst, const char *src, size_t n);
size_t      my_strlcat(char *dst, const char *src, size_t n);
char        *my_strchr(const char *str, int c);
char        *my_strrchr(const char *str, int c);
char        *my_strstr(const char *haystack, const char *needle);
char        *my_strnstr(const char *haystack, const char *needle, size_t n);
char        my_search_and_replace(char *str, char a, char b);

/* Memory Allocated */

/* Momory Allocated Strings */

/* Utility */
int         my_atoi(char *str);
//char      *my_itoa(int n);
void        my_swap(int *a, int *b);

#endif
