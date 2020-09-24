#include "holberton.h"

/**
 * _isupper - Cheeck if c if upper case
 *
 * @c: the value of the character to check
 *
 * Return:1 (Success) or 0 (Fail) or -1 (Error)
 *
 */
int	_isupper(int c)
{
	if (c)
	{
		if (c >= 65 && c <= 90)
		{
			return (1);
		}
		return (0);
	}
	return (-1);
}
