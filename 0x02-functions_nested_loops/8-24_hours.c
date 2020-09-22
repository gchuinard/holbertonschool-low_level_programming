#include "holberton.h"

/**
 * jack_bauer - Print every minutes of a day
 *
 * Return: void
 */

void	jack_bauer(void)
{
	int	hours;
	int	min;

	hours = 0;
	while (hours < 24)
	{
		min = 0;
		while (min < 60)
		{
			_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
			min++;
		}
		hours++;

	}
}
