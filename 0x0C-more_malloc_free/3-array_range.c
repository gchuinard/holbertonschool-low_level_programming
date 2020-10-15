#include "holberton.h"

/**
 * array_range - creates an array of integers.
 *
 * @min: the firsst int of the array.
 * @max: the last int of the array.
 *
 * Return: (tab) or NULL.
 */

int	*array_range(int min, int max)
{
	int		*tab;
	int		size;
	unsigned int	i;

	if (max < min)
	{
		return (NULL);
	}
	else
	{
		size = max - min;
	}
	tab = (int *)malloc(sizeof(int) * size + 1);
	if (tab == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (min <= max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
