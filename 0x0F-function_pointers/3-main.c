#include "3-calc.h"

/**
 * main - Entry point.
 *
 * @argc: size of argv.
 * @argv: arguments of the executable
 *
 * Return: 0 or if fail 98 || 99 || 100
 */

int	main(int argc, char **argv)
{
	int	nbr1;
	int	nbr2;
	int	result;
	int	(*ft)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((argv[2][0] == '%' || argv[2][0] == '*'
				|| argv[2][0] == '+' || argv[2][0] == '-'
				|| argv[2][0] == '/') && argv[2][1] == '\0')
	{
		nbr2 = atoi(argv[3]);
		if (nbr2 == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
		{
			printf("Error\n");
			return (100);
		}
		nbr1 = atoi(argv[1]);

	}
	else
	{
		printf("Error\n");
		exit(99);
	}
	ft = get_op_func(argv[2]);
	result = ft(nbr1, nbr2);
	printf("%i\n", result);
	return (0);
}
