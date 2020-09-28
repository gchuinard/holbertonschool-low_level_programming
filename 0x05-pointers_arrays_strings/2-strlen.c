#include "holberton.h"

/**
 * _strlen - returns the length of a string.
 *
 * @s: the string.
 *
 * Return: Return the size of the string
 *
 */

int	_strlen(char *s)
{
	int	len;

	len = 0;
	while (*(s++))
	{
		len++;
	}
	return (len);
}
