#include "function_pointers.h"

/**
 * main - Entry point.
 *
 * @argc: the size of argv.
 * @argv: table with arguments
 *
 * Return: 0 (Always)
 */

int	main(int argc, char **argv)
{

	unsigned char	*ft;
	int		i;
	int		nbr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	nbr = atoi(argv[1]);
	if (nbr <= 0)
	{
		printf("Error\n");
		return (2);
	}
	ft = (unsigned char *)main;
	i = 0;
	while (i < (nbr - 1))
	{
		printf("%02x ", ft[i]);
		i++;
	}
	printf("%02x\n", ft[i]);
	return (0);
}
