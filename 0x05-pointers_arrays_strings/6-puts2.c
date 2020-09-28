#include "holberton.h"

/**
 * puts2 - prints every other character of a string, starting with
 * the first character, followed by a new line.
 *
 * @str: the string to dispay.
 *
 * Return: void
 *
 */

void	puts2(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = _strlen(str);
	while (i < len)
	{
		write(1, &str[i], 1);
		i += 2;
	}
	write(1, "\n", 1);
}
