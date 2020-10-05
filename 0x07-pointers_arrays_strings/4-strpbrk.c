#include "holberton.h"

/**
 * _strchr - locates a character in a string.
 *
 * @s: the string to compare.
 * @c: the caractere to find.
 *
 * Return: the first occurrence of the character c in
 * the string s (Success) or NULL (Fail).
 */

char	*_strpbrk(char *s, char *accept);
char	*_strchr(char *s, char c)
{
	unsigned int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (NULL);
}
