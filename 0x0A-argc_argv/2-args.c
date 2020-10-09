#include <stdio.h>

/**
 * main - Entry point.
 *
 * @argc: The number of command line arguments.
 * @argv: An array containing the program command line arguments.
 *
 * Return: 0 (Always Success).
 */

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	(void)argc;
	while (argv[i])
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
