#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 *
 * @n: the number of arguments to add.
 *
 * Return: value the sum or 0
 */
int	sum_them_all(const unsigned int n, ...)
{
	unsigned int	i;
	int		result;
	va_list		params;

	va_start(params, n);
	result = 0;
	i = 0;
	while (i < n)
	{
		result += va_arg(params, int);
		i++;
	}
	va_end(params);
	return (result);
}
