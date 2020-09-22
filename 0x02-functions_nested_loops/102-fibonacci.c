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
	int		count;
	unsigned long	nbr;
	unsigned long	tmp;

	result = 1;
	count = 1;
	nbr = 1;
	while (count < 50)
	{
		printf("%lu, ", result);
		tmp = result;
		result += nbr;
		nbr = tmp;
		count++;
	}
	printf("%lu\n", result);
	return (0);
}
