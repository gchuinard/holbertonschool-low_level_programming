#include "function_pointers.h"

/**
 * print_name - print a name, depend on the function in the param.
 *
 * @name: the name to print.
 * @f: the pointer on function to use ot print.
 *
 * Return: void
 */

void	print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
