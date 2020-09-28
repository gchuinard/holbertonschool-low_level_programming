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
 * rev_string - reverses a string.
 *
 * @s: the string to reverse.
 *
 * Return: void
 *
 */

void	rev_string(char *s)
{
	int	i;
	int	j;
	char	tmp;

	i = 0;
	j = ft_strlen(s) - 1;
	while (j > i)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
	}
}
