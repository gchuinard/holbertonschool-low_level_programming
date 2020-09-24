#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 * @n: size of the diagonal to draws
 *
 * Return: void
 *
 */
void	print_diagonal(int n)
{
	int	space;
	int	count;

	count = 0;
	while (n > 0)
	{
		space = count;
		while (space > 0)
		{
			_putchar(' ');
			space--;
		}
		_putchar('\\');
		n--;
		if (n > 0)
		{
			_putchar('\n');
		}
		count += 1;

	}
	_putchar('\n');
}
