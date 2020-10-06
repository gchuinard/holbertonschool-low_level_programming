#include "holberton.h"

/**
 * _check_sqrt - check if rac * rac == n.
 *
 * @rac: racine of n
 * @n: the number we want to calculate the racine
 *
 * Return: the racine or -1.
 *
 */

int	_check_sqrt(int rac, int n)
{
	if (rac * rac > n)
	{
		return (-1);
	}
	else if (rac * rac == n)
	{
		return (rac);
	}
	else
	{
		return (_check_sqrt((rac + 1), n));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: the number.
 *
 * Return: the result or -1.
 */

int	_sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (_check_sqrt(1, n));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0.
 *
 * @n: the number.
 *
 * Return: 1 if it's a prime number 0 if not.
 */

int	is_prime_number(int n)
{
	if (n > 0 && _sqrt_recursion(n) == -1)
	{
		return (1);
	}
	return (0);
}
