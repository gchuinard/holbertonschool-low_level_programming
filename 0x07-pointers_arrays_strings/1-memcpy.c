#include "holberton.h"

/**
 * _memcpy - copies memory area.
 *
 * @src: the string to copy.
 * @dest: the string to fill up.
 * @n: number of charater use to fill up
 *
 * Return: dest (Always).
 */

char	*_memcpy(char *dest, char *src, unsigned int n);
{
	unsigned int i;

	i = 0;
	while (i++ < n)
	{
		dest[i] = src[i];
	}
	return (dest);
}
