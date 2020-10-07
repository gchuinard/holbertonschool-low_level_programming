#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string.
 *
 * @s: the string to calcul the length.
 *
 * Return: then length of the string.
 */

int	_strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}

/**
 * _check_palindrome - check is two char are equal.
 *
 * @s: the string where char are storage.
 * @len: the end of the string
 * @i: the index of the stirng
 *
 * Return: 1 if the char are equal 0 if not.
 */

int	_check_palindrome(char *s, int len, int i)
{
	if (s[i] == s[len] && (i == (len - 1) || i == len))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (_check_palindrome(s, len - 1, i + 1));
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 *
 * @s: the string to analyse.
 *
 * Return: 1 if s is a palindrome and 0 if not.
 */

int	is_palindrome(char *s)
{
	int	len;

	len = _strlen_recursion(s);
	if (len <= 1)
	{
		return (1);
	}
	return (_check_palindrome(s, len - 1, 0));
}
