#include "holberton.h"

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
	j = _strlen(s) - 1;
	while (j > 2)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
	}
}
