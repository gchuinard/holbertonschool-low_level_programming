#include "holberton.h"

/**
 * _putchar - print a character
 * @c: the character to display
 *
 * Description: Longer description of the function)?
 *
 * Return: void
 */
int	_putchar(char c)
{
	return (write(1, &c, 1));
}
