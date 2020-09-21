#include "holberton.h"

/**
 * print_to_98 - Print all the number unil 98
 *
 * @nbr: number value
 *
 * Return: void
 */

void	print_to_98(int nbr)
{
	while (nbr != 98)
	{
		printf("%i, ", nbr);
		if (nbr < 98)
		{
			nbr++;
		}
		else
		{
			nbr--;
		}
	}
	printf("%i\n", nbr);
}
