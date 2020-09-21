#include "holberton.h"

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

	if (nbr_end > 0 && nbr_end < 16)
	{
		nbr = 0;
		while (nbr <= nbr_end)
		{
			fact = 0;
			while (fact <= nbr_end)
			{
				result = nbr * fact;
				if (result < 100 && result > 9 && fact != 0)
				{
					_putchar(' ');
				}
				else if (result < 10 && fact != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				if (result > 99)
				{
					_putchar((result / 100) + '0');
					_putchar(((result / 10) % 10) + '0');
					_putchar((result % 10) + '0');
				}
				else if (result > 9)
				{
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				}
				else
				{
					_putchar((result % 10) + '0');
				}
				if (fact < nbr_end)
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
}

int	main(void)
{
	print_times_table(12);
	return (0);
}
