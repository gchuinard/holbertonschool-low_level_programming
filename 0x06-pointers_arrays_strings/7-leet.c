#include "holberton.h"

/**
 * leet - capitalizes all words of a string.
 *
 * @str: the string.
 *
 * Return: the string 'leeted'.
 *
 */

char	*leet(char *str)
{
	int	i;
	int	j;
	char	letter[5] = {'a', 'e', 'o', 't', 'l'};
	char	nbr[5] = {'4', '3', '0', '7', '1'};
	i = 0;
	while (str[i])
	{
		j = 0;
		while (j < 5)
		{
			if (letter[j] == str[i] || (letter[j] -32) == str[i])
			{
				str[i] = nbr[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
