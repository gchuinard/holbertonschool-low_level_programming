#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 **/
int	main(void)
{
	char	alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		putchar(alpha++);
	}
	alpha = 'A';
	while (alpha <= 'Z')
	{
		putchar(alpha++);
	}
	putchar('\n');
	return (0);
}
