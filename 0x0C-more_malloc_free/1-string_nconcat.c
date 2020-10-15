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
 * string_nconcat - concatenates two strings.
 *
 * @s1: the first string.
 * @s2: the second string.
 * @n: the size we want to copy.
 *
 * Return: (dest) or NULL.
 */
char	*string_nconcat(char *s1, char *s2, unsigned int n)
{
	char		*dest;
	size_t		len;
	unsigned int	i;
	unsigned int	j;

	if (_strlen(s2) <= n)
	{
		len = _strlen(s1) + _strlen(s2) + 1;
	}
	else
	{
		len = _strlen(s1) + n + 1;
	}
	dest = (char *)malloc(sizeof(char) * len);
	if (dest == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s1 != NULL && s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2 != NULL && s2[j] && j < n)
	{
		dest[i] = s2[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
