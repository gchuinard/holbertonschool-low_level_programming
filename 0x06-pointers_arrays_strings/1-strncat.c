#include "holberton.h"

/**
 * _strncat - concatenates two strings.
 *
 * @dest: contain the first part of the string.
 * @src: contain the second part of the string.
 * @n: limit the concatenation
 *
 * Return: dest (the two strings concatenates)
 *
 */

char	*_strncat(char *dest, char *src, int n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j] && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
		if (src[j] == '\0' || j == n)
		{
			dest[i] = '\0';
		}
	}
	return (dest);
}
