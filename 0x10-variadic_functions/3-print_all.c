#include "variadic_functions.h"

/**
 * print_all - prints anything.
 *
 * @format: format of the arguments
 *
 * Return: void
 */
void	print_all(const char * const format, ...)
{
	unsigned int	i;
	char		*str;
	char		*space;
	va_list		params;

	va_start(params, format);
	i = 0;
	while (format && format[i])
	{
		space = "";
		if (format[i + 1])
		{
			space = ", ";
		}
		switch (format[i])
		{
			case 'c':
				printf("%c%s", va_arg(params, int), space);
				break;
			case 'i':
				printf("%i%s", va_arg(params, int), space);
				break;
			case'f':
				printf("%f%s", va_arg(params, double), space);
				break;
			case's':
				str = va_arg(params, char *);
				if (!str || !*str)
				{
					printf("%p%s", str, space);
				}
				else
				{
					printf("%s%s", str, space);
				}
				break;
		}
		i++;
	}
	printf("\n");
}
