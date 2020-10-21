#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 *
 * @array: the array.
 * @size: the size of the array.
 * @action: the function to pass on each elements of the array.
 *
 * Return: void
 */

void	array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int	i;

	if (array != NULL && action != NULL)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
