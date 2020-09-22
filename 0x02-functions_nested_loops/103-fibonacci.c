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

	result = 1;
	nbr = 1;
	while (result < 4000000)
	{
		if (result % 2 == 0)
			printf("%lu\n", result);
		tmp = result;
		result += nbr;
		nbr = tmp;
	}
	return (0);
}
