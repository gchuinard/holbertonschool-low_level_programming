#include "holberton.h"

/**
 * _putstr - print a string
 * @str: the string to display
 *
 * Description: Longer description of the function)?
 *
 * Return: void
 */

void	_putstr(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
}
