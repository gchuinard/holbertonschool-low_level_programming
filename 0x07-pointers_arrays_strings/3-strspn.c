#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: the string to compare.
 * @accept: value accepted.
 *
 * Return: result.
 */

unsigned int	_strspn(char *s, char *accept)
{
	unsigned int	result;
	unsigned int	i;
	unsigned int	j;

	result = 0;
	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j] && i == result)
			{
				result++;
			}
			j++;
		}
		i++;
	}
	return (result);
}
