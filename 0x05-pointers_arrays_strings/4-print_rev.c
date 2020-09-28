#include "holberton.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 *
 * @s: the string to dispay.
 *
 * Return: void
 *
 */

void	print_rev(char *s)
{
	int	len;

	len = _strlen(s);
	while (*(s))
	{
		s++;
	}
	while (len-- >= 0)
	{
		write(1, s--, 1);
	}
	write(1, "\n", 1);
}
