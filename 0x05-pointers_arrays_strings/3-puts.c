#include "holberton.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 *
 * @str: the string to dispay.
 *
 * Return: void
 *
 */

void	_puts(char *str)
{
	while (*(str))
	{
		write(1, str++, 1);
	}
	write(1, "\n", 1);
}
