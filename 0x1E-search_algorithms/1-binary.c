#include "search_algos.h"


/**
 * print_array - print an array
 *
 * @array : The array to search in.
 * @start: Index start.
 * @end: Index end.
 *
 * Return: Void
 */

void	print_array(int *array, size_t start, size_t end)
{
	size_t	i;

	printf("Searching in array: %i", array[start]);
	i = start + 1;
	while (i <= end)
	{
		printf(", %i", array[i]);
		i++;
	}
	printf("\n");
}




/**
 * binary_search - Searches for a value in a sorted array of
 * integers using the Binary search algorithm.
 *
 * @array : The array to search in.
 * @size: Number of elements in the array.
 * @value: value to search.
 *
 * Return:  the first index where value is found, else -1.
 */

int	binary_search(int *array, size_t size, int value)
{
	size_t	start;
	size_t	end;
	size_t	mid;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	start = 0;
	end = size - 1;
	while (start <= end)
	{
		print_array(array, start, end);
		mid = (start + end) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] > value)
		{
			end = mid - 1;
		}
		else if (array[mid] < value)
		{
			start = mid + 1;
		}
	}
	return (-1);
}
