#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int	main(void)
{
	int	result;
	int	count;

	count = 1;
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
