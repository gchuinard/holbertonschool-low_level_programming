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
 * _strdup - returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given
 * as a parameter.
 *
 * @str: the string.
 *
 * Return: the string duplicate or NULL.
 */

char	*_strdup(char *str)
{
	char		*dest;
	size_t		len;
	unsigned int	i;

	if (str == NULL)
	{
		return (NULL);
	}
	len = _strlen(str);
	dest = (char *)malloc(sizeof(char) * len);
	if (dest != NULL && *str)
	{
		i = 0;
		while (i < len)
		{
			dest[i] = str[i];
			i++;
			if (i == len)
			{
				dest[i] = '\0';
			}
		}
	}
	if (dest != NULL)
	{
		return (dest);
	}
	else
	{
		return (NULL);
	}
}
