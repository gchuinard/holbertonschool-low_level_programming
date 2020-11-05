#include "holberton.h"

/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 if big , 1 if little
 */

int	get_endianness(void)
{
	int n;

	n = 1;
	if (*(char *)&n == 1)
	{
		return (1);
	}
	return (0);
}
