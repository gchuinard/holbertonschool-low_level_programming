#include "holberton.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 *
 * @a: the numbers tab to print.
 * @size: the size of the square.
 *
 * Return: void.
 */

void	print_diagsums(int *a, int size)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (i < size)
	{
		result += *(a + 1 * (size + 1));
		i++;
	}
	printf("%i, ", result);
	i = 0;
	result = 0;
	while (i < size)
	{
		sum += *(a + (i + 1) * (size - 1));
		i++;
	}
	printf("%i\n", result);
}
