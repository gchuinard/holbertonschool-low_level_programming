#include "holberton.h"

/**
 * ft_strlen - calculate the length of a string.
 *
 * @str: the string we want the length.
 *
 * Return: the length of the string
 *
 */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*(str++))
	{
		len++;
	}
	return (len);
}

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
	len = ft_strlen(str);
	while (i < len)
	{
		write(1, &str[i], 1);
		i += 2;
	}
	write(1, "\n", 1);
}
