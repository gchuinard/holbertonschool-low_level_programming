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

	deci = 0;
	while (deci <= 9)
	{
		unit = 0;
		while (unit <= 9)
		{
			putchar(deci + '0');
			putchar(unit + '0');
			if (unit < 9 || deci < 9)
			{
				putchar(',');
				putchar(' ');
			}
			unit++;
		}
		deci++;
	}
	putchar('\n');
	return (0);
}
