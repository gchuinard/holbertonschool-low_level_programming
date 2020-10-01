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
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'M') ||
				(str[i] >= 'a' && str[i] <= 'm'))
		{
			str[i] += 13;
		}
		else if ((str[i] >= 'N' && str[i] <= 'Z') ||
				(str[i] >= 'n' && str[i] <= 'z'))
		{
			str[i] -= 13;
		}
		i++;
	}
	return (str);
}
