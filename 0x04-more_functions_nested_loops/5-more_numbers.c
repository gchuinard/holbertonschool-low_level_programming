#include "holberton.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 *
 * Return: void
 *
 */
void	more_numbers(void)
{
	int	c;
	int	count;

	count = 0;
	while (count < 10)
	{
		c = 0;
		while (c <= 14)
		{
			if (c < 10)
			{
				_putchar(c + '0');
			}
			else
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			c++;
		}
		_putchar('\n');
		count++;
	}
}
