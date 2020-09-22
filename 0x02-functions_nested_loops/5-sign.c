#include "holberton.h"

/**
 * print_sign - Checks for the signe of the number (n)
 *
 * @n: number value
 *
 * Return: -1 Negative : 0 Zero : 1 Positive
 */

int	print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
