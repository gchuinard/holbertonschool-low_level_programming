#include "holberton.h"

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
 * argstostr - concatenates all the arguments of a program.
 *
 * @ac: the number of arguments.
 * @av: the arguments.
 *
 * Return: the aguments concaten or NULL.
 */

char	*argstostr(int ac, char **av)
{
	int	i;
	int	j;
	int	k;
	size_t	len;
	char	*tab;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	i = 0;
	len = 0;
	while (i < ac)
	{
		len += _strlen(av[i]) + 1;
		i++;
	}
	tab = (char *)malloc(sizeof(char) * len + 1);
	if (tab == NULL)
	{
		return (NULL);
	}
	i = 0;
	k = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			tab[k++] = av[i][j++];
		}
		tab[k++] = '\n';
		i++;
		if (i == ac)
		{
			tab[k] = '\0';
		}
	}
	return (tab);
}
