#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 **/
int	main(void)
{
	int	alpha;

	alpha = 0;
	while (alpha <= 9)
	{
		putchar(alpha++);
	}
	putchar('\n');
	return (0);
}
