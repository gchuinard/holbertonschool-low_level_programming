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
	void		*ptr;
	unsigned int	i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = (void *)malloc(size * nmemb);
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < (nmemb * size))
	{
		((char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}
