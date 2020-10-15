#include "holberton.h"

/**
 * _calloc - allocates memory for an array, using malloc.
 *
 * @nmemb: number of element to put inside the array.
 * @size: size of the element to put inside the array.
 *
 * Return: (ptr) or NULL.
 */

void	*_calloc(unsigned int nmemb, unsigned int size)
{
	char		*ptr;
	unsigned int	i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = (char *)malloc(size * nmemb);
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < (nmemb * size))
	{
		ptr[i] = '0';
		i++;
	}
	ptr[i] = '\0';
	return ((void *)ptr);
}
