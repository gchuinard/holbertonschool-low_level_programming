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
		while (i < size)
		{
			str[i] = c;
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}

void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}

int main(void)
{
	char *buffer;

	buffer = create_array(98, 'H');
	if  (buffer == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	simple_print_buffer(buffer, 98);
	free(buffer);
	return (0);
}
