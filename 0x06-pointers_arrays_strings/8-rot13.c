#include "holberton.h"

/**
 * rot13 - capitalizes all words of a string.
 *
 * @str: the string.
 *
 * Return: the string 'roted'.
 *
 */

char	*rot13(char *str)
{
	char	alpha[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	roted[53] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int	i;
       	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i] != alpha[j])
		{
			j++;
		}
		if (j < 52)
		{
			str[i] = roted[j];
		}
		i++;
	}
	return (str);
}
