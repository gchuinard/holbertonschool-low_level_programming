#include "holberton.h"

/**
 * _atoi - convert a string to an integer.
 *
 * @s: the string to convert.
 *
 * Return: nbr
 *
 */


int     _atoi(char *s)
{
	int             nbr;
	int             sign;

	nbr = 0;
	sign = 0;
	while ((*s < '0' || *s > '9') && *s != '\0')
	{
		if (*s == '-')
		{
			sign--;
		}
		else if (*s == '+')
		{
			sign++;
		}
		s++;
	}
	while ((*(s) >= '0' && (*(s) <= '9')))
	{
		nbr = nbr * 10 + *s - 48;
		s++;
	}
	sign = sign < 0 ? -1 : 1;
	return (nbr * sign);
}
