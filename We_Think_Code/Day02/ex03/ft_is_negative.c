/* 
-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
|	  *	     *		|
|	 *	      *		| File		:	ft_is_negative.c
|	*	       *	|
|	****************	| Author	:	Lahlimbazo
|	 *    *       *		|
|	  *   *	     *		| Creation Date	:	2026-05-12	
|	   *  ****  *		|
|	    *	   *		| Copyrite	:	Property of TheBucket
|	     ******		|
-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	if (n >= 0)
		{
			ft_putchar('P');
		}
	else
		{
			ft_putchar('N');
		}
}
