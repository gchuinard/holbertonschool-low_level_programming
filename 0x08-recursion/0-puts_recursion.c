/**
 * _puts_recursion - prints a string, followed by a new line.
 *
 * @s: the string to print.
 *
 * Return: void.
 */

#include "holberton.h"

void	_puts_recursion(char *s)
{
	if (*s)
	{
		write(1, s, 1);
		_puts_recursion(s + 1);
	}
	else
	{
		write(1, "\n", 1);
	}
}
