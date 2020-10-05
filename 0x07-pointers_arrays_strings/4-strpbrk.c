#include "holberton.h"

/**
 * _strpbrk -  locates the first occurrence in the string s of any
 * of the bytes in the string accept.
 *
 * @s: the string to compare.
 * @accept: value accepted.
 *
 * Return: pointer to the byte in s that matches one
 * of the bytes in accept, or NULL if no such byte is found.
 */

char	*_strpbrk(char *s, char *accept)
{
	unsigned int	i;
	unsigned int	j;
	char		*result;

	i = 0;
	result = NULL;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				result = &s[i];
				return (result);
			}
			j++;
		}
		i++;
	}
	j = 0;
	while (accept[j])
	{
		if (accept[j] == s[i])
		{
			result = &s[i];
		}
		j++;
	}
	return (result);
}
