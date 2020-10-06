#include "holberton.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 *
 * @x: the number.
 * @y: the power.
 *
 * Return: the result or -1 if y < 0.
 */

int	_pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else if (y > 1)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (-1);
}
