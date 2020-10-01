#include "holberton.h"

/**
 * _strncpy - copy one part of the string, delimited by 'n'.
 *
 * @dest: contain enough memony for the copy.
 * @src: contain the string to copy.
 * @n: limit the copy
 *
 * Return: dest (the copy)
 *
 */

char	*_strncpy(char *dest, char *src, int n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < n && src[j] && dest[i])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
