#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of
 * integers using the Linear search algorithm.
 *
 * @array : The array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search.
 *
 * Return:  the first index where value is found, else -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t  i;

	if (array == NULL || size <= 0)
	{
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
