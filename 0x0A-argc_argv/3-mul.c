#include "holberton.h"

/**
 * _atoi - convert a string to an integer.
 *
 * @s: the string to convert.
 *
 * Return: nbr
 *
 */

int	_atoi(char *s)
{
	int	i;
	int	nbr;
	int	sign;

	i = 0;
	sign = 1;
	nbr = 0;
	while ((s[i] < '0' || s[i] > '9') && s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		nbr = nbr * 10 + sign * (s[i] - '0');
		i++;
	}
	return (nbr);
}

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
	if (argc == 3)
	{
		printf("%i\n", _atoi(argv[1]) * _atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
