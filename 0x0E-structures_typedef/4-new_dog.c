#include "dog.h"

/**
 * _strlen - return the size of a string.
 *
 * @str: the string.
 *
 * Return: the size of the string or 0.
 */

size_t	_strlen(char *str)
{
	size_t	len;

	len = 0;
	if (str != NULL)
	{
		while (*(str++))
		{
			len++;
		}
	}
	return (len);
}

/**
 * _strdup - returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given
 * as a parameter.
 *
 * @str: the string.
 *
 * Return: the string duplicate or NULL.
 */

char	*_strdup(char *str)
{
	char		*dest;
	size_t		len;
	unsigned int	i;

	if (str == NULL)
	{
		return (NULL);
	}
	len = _strlen(str) + 1;
	dest = (char *)malloc(sizeof(char) * len);
	if (dest != NULL)
	{
		i = 0;
		while (i < len)
		{
			dest[i] = str[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (dest);
}

/**
 * new_dog - creates a new structure dog.
 *
 * @name: the name of the dog.
 * @age: the age of the dog.
 * @owner: the owner of the dog.
 *
 * Return: void
 */

dog_t	*new_dog(char *name, float age, char *owner)
{
	dog_t	*dog;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog != NULL)
	{
		dog->name = _strdup(name);
		if (dog->name == NULL)
		{
			free(dog);
			return (NULL);
		}
		dog->owner = _strdup(owner);
		if (dog->owner == NULL)
		{
			free(dog->name);
			free(dog);
			return (NULL);
		}
		dog->age = age;
	}
	return (dog);
}
