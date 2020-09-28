#include "holberton.h"

/**
 * puts_half -  prints half of a string, followed by a new line.
 *
 * @str: the string to dispay.
 *
 * Return: void
 *
 */

void	puts_half(char *str)
{
	int	len;

	len = _strlen(str) / 2;
	while (str[len])
	{
		write(1, &str[len++], 1);
	}
	write(1, "\n", 1);
}
