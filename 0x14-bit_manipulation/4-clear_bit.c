#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 *
 * @n : input number
 * @index : required bit
 *
 * Return: 1 if worked -1 if an error occured
 */

int	clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)
	{
		*n = ~(~*n | (1 << index));
		return (1);
	}
	return (-1);
}
