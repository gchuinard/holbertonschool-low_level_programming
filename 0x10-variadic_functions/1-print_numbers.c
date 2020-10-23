#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 *
 * @separator: the separator.
 * @n: the arguments.
 *
 * Return: void
 */

void	print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int	i;
	va_list		params;

	va_start(params, n);
	i = 0;
	while (i < n)
	{
		printf("%i", va_arg(params, int));
		if (i < (n - 1) && separator)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(params);
}
