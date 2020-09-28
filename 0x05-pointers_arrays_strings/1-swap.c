#include "holberton.h"

/**
 * swap_int - swaps the values of two integers.
 *
 * @a: point on the first int.
 * @b: point on the second int.
 *
 * Return: void
 *
 */

void	swap_int(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
