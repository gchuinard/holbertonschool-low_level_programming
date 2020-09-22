#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int	main(void)
{
	int	nbr;
	int	cinq;
	int	trois;
	int	result;
	int	count;

	nbr = 1024;
	count = 0;
	while (count < 1024)
	{
		if (count % 3 == 0 || count % 5 == 0)
		{
			result += count;
		}
		count++;
	}
	printf("%i\n", result);
	return (0);
}
