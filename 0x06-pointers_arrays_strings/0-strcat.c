#include "holberton.h"

/**
 * _strcat - concatenates two strings.
 *
 * @dest: contain the first part of the string.
 * @src: contain the second part of the string.
 *
 * Return: dest (the two strings concatenates)
 *
 */

char	*_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
		if (src[j] == '\0')
		{
			dest[i] = '\0';
		}
	}
	return (dest);
}
