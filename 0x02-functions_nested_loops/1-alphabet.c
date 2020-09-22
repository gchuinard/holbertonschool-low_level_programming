#include "holberton.h"

/**
 * print_alphabet - print the alphabet
 *
 * Return: void
 */

void	print_alphabet(void)
{
	char	alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		_putchar(alpha++);
	}
	_putchar('\n');
}
