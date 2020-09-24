#include "holberton.h"

/**
 * _isdigit - Check if c is a number
 *
 * @c: the value of the character to check
 *
 * Return:1 (Success) or 0 (Fail)
 *
 */
int	_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
