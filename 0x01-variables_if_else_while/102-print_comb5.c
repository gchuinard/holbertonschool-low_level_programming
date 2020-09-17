#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 **/
int	main(void)
{
	int	nbr;
	int	nbr2;

	nbr = 0;
	nbr2 = nbr + 1;
	while (nbr < 100)
	{
		while (nbr2 < 100)
		{
			putchar(nbr / 10 + '0');
			putchar(nbr % 10 + '0');
			putchar(' ');
			putchar(nbr2 / 10 + '0');
			putchar(nbr2 % 10 + '0');
			if (nbr < 98)
			{
				putchar(',');
				putchar(' ');
			}
			nbr2++;
		}
		nbr++;
		nbr2 = nbr + 1;
	}
	putchar('\n');
	return (0);
}
