#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int	main(void)
{
	long double	nbr;
	long double	tmp;
	long double	total;
	int	count;

	nbr = 1;
	total = 2;
	count = 0;
	printf("1, ");
	printf("2, ");
	while (count < 96)
	{
		tmp = total;
		total += nbr;
		nbr = tmp;
		printf("%.0Lf", total);
		count++;
		if (count < 96)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
	}
	return (0);
}
