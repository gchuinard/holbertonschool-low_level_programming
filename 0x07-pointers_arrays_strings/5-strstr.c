#include "holberton.h"

/**
 * _strstr - finds the first occurrence of the substring
 * needle in the string haystack.
 *
 * @haystack: the string where to search.
 * @needle: the string to find..
 *
 * Return: the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char	*_strstr(char *haystack, char *needle)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	tmp;

	i = 0;
	while (haystack[i])
	{
		j = 0;
		tmp = i;
		while (needle[j] == haystack[i])
		{
			i++;
			j++;
			if (needle[j] == '\0')
			{
				return (&haystack[tmp]);
			}
		}
		i = tmp;
		i++;
	}
	return (NULL);
}
