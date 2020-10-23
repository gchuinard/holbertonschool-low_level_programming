include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 *
 * @separator: the separator.
 * @n: the strings to print.
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list params;
	char *str;

	va_start(params, n);
	i = 0;
	while (i < n)
	{
		str = va_arg(params, char *);
		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("%p", str);
		}
		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(params);
}
