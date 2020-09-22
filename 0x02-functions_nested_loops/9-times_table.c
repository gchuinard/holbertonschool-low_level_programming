#include "holberton.h"

/**
 * times_table - Print the 9 times tables
 *
 * Return: void
 */

void	times_table(void)
{
	int	nbr;
	int	fact;
	int	result;

	nbr = 0;
	while (nbr < 10)
	{
		fact = 0;
		while (fact < 10)
		{
			result = nbr * fact;
			if (result < 10 && fact != 0)
			{
				_putchar(' ');
			}
			if (result > 9)
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			else
			{
				_putchar((result % 10) + '0');
			}
			if (fact < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
			fact++;
		}
		nbr++;
	}
}
