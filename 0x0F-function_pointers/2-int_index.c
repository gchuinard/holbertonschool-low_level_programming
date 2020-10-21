#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 *
 * @array: the array.
 * @size: the size of the array.
 * @cmp: the function to check elements of the array.
 *
 * Return: the first index or -1 if fail.
 */

int	int_index(int *array, int size, int (*cmp)(int))
{
	int	i;

	if (array != NULL && cmp != NULL)
	{
		i = 0;
		while (i < size)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
			i++;
		}
	}
	return (-1);
}
