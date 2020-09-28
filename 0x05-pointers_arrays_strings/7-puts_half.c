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

	len = ft_strlen(str) / 2;
	while (str[len])
	{
		write(1, &str[len++], 1);
	}
	write(1, "\n", 1);
}
