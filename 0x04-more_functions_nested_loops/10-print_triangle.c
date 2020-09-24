#include "holberton.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 *
 * @size: size of the triangle to draws
 *
 * Return: void
 *
 */
void	print_triangle(int size)
{
	int	space;
	int	hash;
	int	lenght;

	lenght = size;
	while (size > 0)
	{
		space = size - 1;
		hash = lenght - space;
		while (space > 0)
		{
			_putchar(' ');
			space--;
		}
		while (hash > 0)
		{
			_putchar('#');
			hash--;
		}
		size--;
		if (size > 0)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
