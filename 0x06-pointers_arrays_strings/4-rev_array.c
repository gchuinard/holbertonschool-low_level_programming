#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers.
 *
 * @n: the array.
 * @a: the size of the array.
 *
 * Return: void.
 *
 */
void	reverse_array(int *a, int n)
{
	int	start;
	int	end;
	int	tmp;

	start = 0;
	end = n - 1;
	while (start < n && start < end)
	{
		tmp = a[start];
		a[start] = a[end];
		a[end] = tmp;
		end--;
		start++;
	}
}
