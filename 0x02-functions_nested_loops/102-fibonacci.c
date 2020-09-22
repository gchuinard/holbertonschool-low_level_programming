#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int	main(void)
{
	long long	result;
	int	count;
	long long	nbr;
	long long	tmp;

	result = 1;
	count = 1;
	nbr = 1;
	while (count < 50)
	{
		printf("%lli, ", result);
		tmp = result;
		result += nbr;
		nbr = tmp;
		count++;
	}
	printf("%lli\n", result);
	return (0);
}
