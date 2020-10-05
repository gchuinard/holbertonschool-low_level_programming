#include "holberton.h"

/**
 * _memset - fills memory with a constant byte.
 *
 * @s: the string to fill up.
 * @b: the charater with it's fill up.
 * @n: number of charater use to fill up
 *
 * Return: s (Always).
 */

char	*_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
