#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 **/
int	main(void)
{
	int	unit;
	int	deci;
	int	cent;

	cent = 0;
	while (cent <= 9)
	{
		deci = cent + 1;
		while (deci <= 9)
		{
			unit = deci + 1;
			while (unit <= 9)
			{
				putchar(cent + '0');
				putchar(deci + '0');
				putchar(unit + '0');
				if (unit != 9 || deci != 8 || cent != 7)
				{
					putchar(',');
					putchar(' ');
				}
				unit++;
			}
			deci++;
		}
		cent++;
	}
	putchar('\n');
	return (0);
}
