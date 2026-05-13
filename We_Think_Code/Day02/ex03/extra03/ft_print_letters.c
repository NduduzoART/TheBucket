/* 
-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
|	  *	     *		|
|	 *	      *		| File		:	ft_print_letters.c
|	*	       *	|
|	****************	| Author	:	Lahlimbazo
|	 *    *       *		|
|	  *   *	     *		| Creation Date	:	2026-05-13	
|	   *  ****  *		|
|	    *	   *		| Copywrite	:	Property of TheBucket
|	     ******		|
-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_letters_a_to_m(void)
{
	char letters = 'a';
	while (letters <= 'm')
		{
			ft_putchar(letters);
			letters++;
		}
}

void	ft_letters_n_to_z(void)
{
	char alphabets = 'n';
	while (alphabets <= 'z')
		{
			ft_putchar(alphabets);
			alphabets++;
		}
}
void	ft_print_letters(int p)
{

	if (p >= 0 && p <= 5)
		{
			ft_letters_a_to_m();
		}
	else if (p >= 6 && p <= 9)
		{
			ft_letters_n_to_z();
		}
	else 
	{
		write(1, "ERROR\n", 6);
	}
}
