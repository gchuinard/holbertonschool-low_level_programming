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
		printf("%lu", result);
		tmp = result;
		result += nbr;
		nbr = tmp;
		if (result < 4000000)
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
