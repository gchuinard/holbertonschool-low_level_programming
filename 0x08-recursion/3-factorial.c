#include "holberton.h"

/**
 * factorial - returns the length of a string.
 *
 * @n: the factorial number.
 *
 * Return: the result or -1 if n < 0.
 */

int	factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else if (n > 1)
	{
		return (n * factorial(n - 1));
	}
	return (-1);
}
