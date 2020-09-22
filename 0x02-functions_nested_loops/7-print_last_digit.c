#include "holberton.h"

/**
 * print_last_digit - Print last digit of a number (n)
 *
 * @n: number value
 *
 * Return: 1 (Success) : 0 (Fail)
 */

int	print_last_digit(int n)
{
	int	result;

	result = n % 10;
	result = (result < 0) ? -result : result;
	_putchar(result + '0');
	return (result);
}
