#include "holberton.h"

/**
 * print_alphabet_x10 - print the alphabet x 10
 *
 * Return: void
 */

void	print_alphabet_x10(void)
{
	char	alpha;
	int	i;

	i = 0;
	while (i++ < 10)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha++);
		}
		_putchar('\n');
	}
}
