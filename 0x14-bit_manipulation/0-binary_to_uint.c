#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @b : the string in binary
 *
 * Return: the number in base deci, 0 if error
 */

unsigned int	binary_to_uint(const char *b)
{
	unsigned int	i;
	unsigned int	b_nbr;

	if (b == NULL)
	{
		return (0);
	}
	i = 0;
	b_nbr = 0;
	while (b[i])
	{
		if (b[i] == '0' || b[i] == '1')
		{
			b_nbr = b_nbr * 2 + (b[i] - '0');
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (b_nbr);
}
