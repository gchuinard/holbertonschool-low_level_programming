#include "holberton.h"

/**
 * print_square - prints a square, followed by a new line.
 *
 * @size: size of the square
 *
 * Return: void
 *
 */
void	print_square(int size)
{
	int	nbr;
	int	side;

	nbr = size;
	while (size > 0)
	{
		side = nbr;
		while (side > 0)
		{
			_putchar('#');
			side--;
		}
		size--;
		if (size > 0)
		{
			_putchar('\n');
		}

	}
	_putchar('\n');
}
