#include "holberton.h"

/**
 * main - finds and prints the largest prime factor of
 * the number 612852475143, followed by a new line.
 *
 * Return: 0 Always (Success)
 *
 */
int	main(void)
{
	long	nbr;
	long	nbrfacto;
	long	result;

	nbr = 612852475143;
	nbrfacto = 2;
	result = nbr;
	while (nbrfacto <= nbr && result != nbrfacto)
	{
		if (result % nbrfacto == 0)
		{
			result /= nbrfacto;
			nbrfacto = 1;
		}
		nbrfacto++;
	}
	printf("%li\n", nbrfacto);
	return (0);
}
