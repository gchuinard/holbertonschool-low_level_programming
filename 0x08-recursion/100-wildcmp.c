#include "holberton.h"

/**
 * wildcmp - compares two strings and returns 1 if the strings can be
 * considered identical, otherwise return 0.
 *
 * @s1: the first string.
 * @s2: the second string.
 *
 * Return: 1 if the string are the same 0 if not.
 */

int	wildcmp(char *s1, char *s2)
{
	if (!*s1 && !*s2)
	{
		return (1);
	}
	else if (!*s1 && *s2 == '*')
	{
		return (wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else
	{
		return (0);
	}
}
