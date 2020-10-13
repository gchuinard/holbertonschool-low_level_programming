#include "holberton.h"

/**
 * _strlen - return the size of a string.
 *
 * @str: the string.
 *
 * Return: the size of the string or 0.
 */

size_t	_strlen(char *str)
{
	size_t	len;

	len = 0;
	if (str != NULL)
	{
		while (*(str++))
		{
			len++;
		}
	}
	return (len);
}

/**
 * str_concat - concatenates two strings.
 *
 * @s1: the first string.
 * @s2: the second string.
 *
 * Return: the concatenates strings or NULL.
 */

char	*str_concat(char *s1, char *s2)
{
	char		*dest;
	size_t		len;
	unsigned int	i;
	unsigned int	j;

	len = _strlen(s1) + _strlen(s2) + 1;
	dest = (char *)malloc(sizeof(char) * len);
	if (dest != NULL)
	{
		i = 0;
		if (s1 != NULL)
		{
			while (s1[i])
			{
				dest[i] = s1[i];
				i++;
			}
		}
		if (s2 != NULL)
		{
			j = 0;
			while (s2[j])
			{
				dest[i] = s2[j];
				i++;
				j++;
			}
		}
		dest[i] = '\0';
	}
	return (dest);
}
