#include "holberton.h"

/**
 * _realloc - reallocate a memory block using malloc and free.
 *
 * @ptr: ponter to realloc.
 * @old_size: old size of the memory.
 * @new_size: new size of the memory.
 *
 * Return: pointer reallocared or NULL.
 */

void	*_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void		*n_ptr;
	unsigned int	i;

	if (ptr == NULL)
	{
		n_ptr = (void *)malloc(new_size);
		free(ptr);
		if (n_ptr == NULL)
		{
			return (NULL);
		}
		return (n_ptr);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	else if  (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	n_ptr = malloc(new_size);
	if (n_ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		i = 0;
		while (i < old_size)
		{
			((char *)n_ptr)[i] = ((char *)ptr)[i];
			i++;
		}
	}
	free(ptr);
	return (n_ptr);
}
