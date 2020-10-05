#include "holberton.h"

/**
 * print_chessboard - prints the chessboard.
 *
 * @a: the chessboard to print.
 *
 * Return: void.
 */

void	print_chessboard(char (*a)[8])
{
	unsigned int	col;
	unsigned int	row;

	col = 0;
	while (col < 8)
	{
		row = 0;
		while (row < 8)
		{
			_putchar(a[col][row]);
			row++;
		}
		_putchar('\n');
		col++;
	}
}
