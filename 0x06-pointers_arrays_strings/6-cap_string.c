#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string.
 *
 * @str: the string.
 *
 * Return: the string capitalize.
 *
 */
char	*cap_string(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (i > 0)
		{
			if ((str[i] >= 'a' && str[i] <= 'z') &&
					(((str[i - 1] < '0') && str[i] != '-') ||
					 (str[i - 1] > '9' && str[i - 1] < 'A') ||
					 (str[i - 1] > 'Z' && str[i - 1] < 'a') ||
					 (str[i - 1] > 'z')))
			{
				str[i] -= 32;
			}
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
