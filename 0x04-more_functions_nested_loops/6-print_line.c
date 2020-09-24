#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal.
 *
 * @n: size of the line to draws
 *
 * Return: void
 *
 */
void	print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
