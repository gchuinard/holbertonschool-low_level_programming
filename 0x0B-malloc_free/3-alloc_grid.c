#include "holberton.h"

/**
 * free_tab - free a table.
 *
 * @tab: the table.
 * @i: number of elements to free.
 *
 * Return: void.
 */
void	free_tab(int **tab, int i)
{
	while (i > 0)
	{
		free(tab[i]);
		i--;
	}
	free(tab);
}

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *
 * @width: the width of the table.
 * @height: the height of the table.
 *
 * Return: the table full of 0 or NULL.
 */

int	**alloc_grid(int width, int height)
{
	int	**tab;
	int	i;
	int	j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	tab = (int **)malloc(sizeof(int *) * height);
	if (tab == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < width)
	{
		tab[i] = (int *) malloc(sizeof(int) * width);
		if (tab[i] == NULL)
		{
			free_tab(tab, i);
			return (NULL);
		}
		i++;
	}
	i = 0;
	while (j < height)
	{
		j = 0;
		while (tab[i][j] < width)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
	}
	return (tab);
}
