#include "holberton.h"

/**
 * _strlen_cat - return the size of a string or 1 if string == NULL.
 *
 * @str: the string
 *
 * Return: the size of a string or 1.
 */

size_t	_strlen_cat(char *str)
{
	size_t	len;

	if (str == NULL)
	{
		return (1);
	}
	len = 0;
	while (str[len])
	{
		len++;
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

	len = _strlen_cat(s1) + _strlen_cat(s2) - 1;
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
