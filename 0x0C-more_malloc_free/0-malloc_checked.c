#include "holberton.h"

/**
 * malloc_checked - allocates memory using malloc.
 *
 * @b: memory size we need.
 *
 * Return: (ptr).
 *
 */

void	*malloc_checked(unsigned int b)
{
	void	*ptr;

	ptr = (void *)malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
