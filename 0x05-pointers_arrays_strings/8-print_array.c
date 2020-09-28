#include "holberton.h"

/**
 * print_array -  prints n elements of an array of integers,
 * followed by a new line.
 *
 * @a: the array to dispay.
 * @n: number of element to print
 *
 * Return: void
 *
 */

void	print_array(int *a, int n)
{
	int	i;

	while (a[i] && i < n)
	{
		printf("%i", a[i++]);
		if (a[i] && i < n)
		{
			printf(", ");
		}
	}
	printf("\n");
}
