#include "holberton.h"

/**
 * free_grid - frees a 2 dimensional grid.
 *
 * @grid: the grid.
 * @height: the height of the grid.
 *
 * Return: void.
 */

void	free_grid(int **grid, int height);
{
	int	i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
}
