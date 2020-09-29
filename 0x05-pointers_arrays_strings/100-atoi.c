#include "holberton.h"

/**
 * _atoi - convert a string to an integer.
 *
 * @s: the string to convert.
 *
 * Return: nbr
 *
 */

int _atoi(char *s)
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
		nbr = nbr * 10 + (s[i] - '0');
		nbr++;
	}
	return (nbr * sign);
}
