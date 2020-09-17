#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 **/
int	main(void)
{
	char	alpha;

	alpha = '0';
	while (alpha <= 'f')
	{
		putchar(alpha++);
		if (alpha == 58)
		{
			alpha = 'a';
		}
	}
	putchar('\n');
	return (0);
}
