#include "holberton.h"

/**
 * _strcmp - compares two strings.
 *
 * @s1: the first string to compare.
 * @s2: the second string to compare.
 *
 * Return: the difference between the first different characters or 0.
 *
 */

int	_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
