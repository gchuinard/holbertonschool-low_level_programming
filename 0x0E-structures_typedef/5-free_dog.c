#include "dog.h"

/**
 * free_dog - free the structure dog_t
 *
 * @d: pointer of the structure dog_t.
 *
 * Return: void.
 */

void	free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			free(d->name);
		}
		if (d->owner != NULL)
		{
			free(d->owner);
		}
		free(d);
	}
}
