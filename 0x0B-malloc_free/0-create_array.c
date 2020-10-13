#include "holberton.h"

/**
 * create_array - creates an array of chars, and initializes it
 * with a specific char.
 *
 * @size: the size we want for the array.
 * @c: the character to fill up the string with
 *
 * Return: the string fill up or NULL
 */

char	*create_array(unsigned int size, char c)
{
	unsigned int	i;
	char		*str;

	if (size == 0)
	{
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * size + 1);
	if (str != NULL)
	{
		while (i <= size)
		{
			str[i] = c;
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}
