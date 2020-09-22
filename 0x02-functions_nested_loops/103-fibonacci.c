#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int	main(void)
{
	unsigned long	result;
	unsigned long	nbr;
	unsigned long	tmp;
	unsigned long	total;

	result = 1;
	nbr = 1;
	total = 0;
	while (result < 4000000)
	{
		if (result % 2 == 0)
		{
			total += result;
		}
		tmp = result;
		result += nbr;
		nbr = tmp;
	}
	printf("%lu\n", total);
	return (0);
}
