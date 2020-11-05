#include "holberton.h"

/**
 * print_b_nbr - prints the binary representation of a number.
 *
 * @nbr : the number to print.
 *
 * Return: void
 */

void	print_b_nbr(unsigned long int nbr)
{
	if (nbr != 0)
	{
		print_b_nbr(nbr >> 1);
		_putchar((nbr & 1) + '0');
	}
}

/**
 * print_binary - prints the binary representation of a number.
 *
 * @n : the number to print in binary.
 *
 * Return: void
 */

void	print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		print_b_nbr(n);
	}
}
