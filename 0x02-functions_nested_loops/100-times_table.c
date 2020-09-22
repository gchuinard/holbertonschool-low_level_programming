#include "holberton.h"

/**
 * print_spaces - Print the nbr of space
 *
 * @nbr: the number of space to print
 *
 * Return: void
 */
void	print_spaces(int nbr)
{
	while (nbr-- > 0)
		_putchar(' ');
}

/**
 * print_times_table - Print the nbr times tables
 *
 * @nbr_end: the higher table who is print
 *
 * Return: void
 */

void	print_times_table(int nbr_end)
{
	int	nbr;
	int	fact;
	int	result;

	if (nbr_end >= 0 && nbr_end < 16)
	{
		nbr = -1;
		while (nbr++ < nbr_end)
		{
			fact = -1;
			while (fact++ < nbr_end)
			{
				result = nbr * fact;
				if (result > 99)
				{
					_putchar(' ');
					_putchar((result / 100) + '0');
					_putchar(((result / 10) % 10) + '0');
					_putchar((result % 10) + '0');
				}
				else if (result > 9)
				{
					print_spaces(2);
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				}
				else
				{
					if (fact != 0)
						print_spaces(3);
					_putchar((result % 10) + '0');
				}
				if (fact < nbr_end)
					_putchar(',');
				else
					_putchar('\n');
			}
		}
	}
}
