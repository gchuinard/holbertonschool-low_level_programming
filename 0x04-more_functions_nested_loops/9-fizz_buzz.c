#include "holberton.h"

/**
 * main - program that prints the numbers from 1 to 100,
 * followed by a new line. But for multiples of three
 * print Fizz instead of the number and for the multiples
 * of five print Buzz. For numbers which are multiples of
 * both three and five print FizzBuzz.
 *
 * Return: 0 Always (Success)
 *
 */
int	main(void)
{
	int	nbr;

	nbr = 1;
	while (nbr <= 100)
	{
		if (nbr % 3 != 0 && nbr % 5 != 0)
		{
			printf("%i", nbr);
		}
		if (nbr % 3 == 0)
		{
			printf("Fizz");
		}
		if (nbr % 5 == 0)
		{
			printf("Buzz");
		}
		if (nbr != 100)
		{
			printf(" ");
		}
		nbr++;
	}
	printf("\n");
	return (0);
}
