#include "holberton.h"

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 *
 * @dest: destination of the copy.
 * @src: souce of the copy.
 *
 * Return: dest
 *
 */

char	*_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
		if (!src[i])
		{
			dest[i] = '\0';
		}
	}
	return (dest);
}
