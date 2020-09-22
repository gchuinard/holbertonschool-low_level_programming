#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int	main(void)
{
	double	nbr;
	double	tmp;
	double	total;
	int	count;

	nbr = 1;
	total = 2;
	count = 0;
	printf("%.0lf\n", nbr++);
	printf("%.0lf\n", nbr++);
	while (count < 98)
	{
		tmp = total;
		total += nbr;
		nbr = tmp;
		printf("%.0lf\n", total);
		count++;
	}
	return (0);
}
