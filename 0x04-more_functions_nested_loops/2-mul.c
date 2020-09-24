#include "holberton.h"

/**
 * mul - multiplies two integers
 *
 * @a: the value of the first number
 * @b: the value of the second number
 *
 * Return: The result of the multiplication (Success) or -1 (Error)
 *
 */
int	mul(int a, int b)
{
	if (a && b)
	{
		return (a * b);
	}
	return (-1);
}
