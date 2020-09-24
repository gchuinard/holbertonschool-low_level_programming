#include "holberton.h"

/**
 * _isdigit - Check if c is a number
 *
 * @c: the value of the character to check
 *
 * Return:1 (Success) or 0 (Fail) or -1 (Error)
 *
 */
int	_isdigit(int c)
{
	if (c)
	{
		if (c >= 48 && c <= 57)
		{
			return (1);
		}
		return (0);
	}
	return (-1);
}
