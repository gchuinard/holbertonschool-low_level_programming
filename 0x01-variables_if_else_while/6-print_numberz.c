#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 **/
int	main(void)
{
	int	alpha;

	alpha = -1;
	while (alpha++ < 9)
	{
		putchar(alpha + '0');
	}
	putchar('\n');
	return (0);
}
