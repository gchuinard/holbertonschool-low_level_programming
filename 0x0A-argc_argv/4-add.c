#include "holberton.h"

/**
 * _is_digit - check is the string content only numbers.
 *
 * @str: the string to analyse.
 *
 * Return: 1 is digit or 0 is not.
 *
 */
int	_is_digit(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		i++;
	}
	if (str[i] == '\0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

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
	int	i;
	int	result;

	i = 1;
	result = 0;
	if (argc > 2)
	{
		while (argv[i])
		{
			if (!_is_digit(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			result += _atoi(argv[i]);
			i++;
		}
		printf("%i\n", result);
	}
	else if (argc == 2)
	{
		if (!_is_digit(argv[1]))
		{
			printf("Error\n");
			return (1);
		}
		result = _atoi(argv[1]);
		printf("%i\n", result);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
