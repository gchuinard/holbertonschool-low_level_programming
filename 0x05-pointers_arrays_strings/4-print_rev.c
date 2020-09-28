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

	len = ft_strlen(s);
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
