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
	unsigned int	col;
	int		result_a;
	int		result_b;
	unsigned int	square;
	int		nbr;

	col = 0;
	result_a = 0;
	result_b = 0;
	square = size * size - size;
	nbr = 0;
	while (col < size)
	{
		printf("a = %i\n", a[square]);
		result_a += a[nbr];
		result_b += a[square];
		nbr += size + 1;
		square -= size - 1;
		col++;
	}
	printf("%i, %i\n", result_a, result_b);
}
