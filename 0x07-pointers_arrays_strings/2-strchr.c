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

char	*_strchr(char *s, char c)
{
	unsigned int	i;
	char		*result;

	i = 0;
	result = NULL;
	while (s[i])
	{
		if (s[i] == c)
		{
			result = &s[i];
			return (result);
		}
		i++;
	}
	if (s[i] == c)
	{
		result = &s[i];
	}
	return (result);
}

int main(void)
{
	char *s = "hello";
	char *f;

	f = _strchr(s, 'l');

	if (f != NULL)
	{
		printf("%s\n", f);
	}
	return (0);
}
