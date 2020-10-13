#include "holberton.h"

/**
 * free_char_grid - frees a 2 dimensional grid.
 *
 * @grid: the grid.
 * @height: the height of the grid.
 *
 * Return: void.
 */

void	free_char_grid(char **grid, int height)
{
	int	i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
}

/**
 * wrd_len - calculate the length of a word.
 *
 * @word: the word.
 *
 * Return: the length of the word.
 */

size_t	wrd_len(char *word)
{
	size_t len = 0;

	if (word != NULL)
	{
		while (word[len] != ' ' && word[len])
		{
			len++;
		}
	}
	return (len);
}

/**
 * count_wrd - count the number of words.
 *
 * @str: the string with the words.
 *
 * Return: the number of words.
 */

int		count_wrd(char *str)
{
	int count = 0, i = 0;

	while (str[i])
	{
		if (str[i] == ' ')
		{
			i++;
		}
		else
		{
			count++;
			while (str[i] && str[i] != ' ')
			{
				i++;
			}
		}
	}
	return (count);
}

/**
 * strtow - splits a string into words.
 *
 * @str: the string.
 *
 * Return: a table or NULL.
 */

char	**strtow(char *str)
{
	char	**tab;
	int	count;
	int	i;
	int	j;
	int	k;


	if (str == NULL || str[0] == '\0')
		return (NULL);
	count = count_wrd(str);
	if (count == 0)
		return (NULL);
	tab = malloc(sizeof(char *) * (count + 1));
	if (tab == NULL)
		return (NULL);
	while (str[i])
	{
		if (str[i] == ' ')
		{
			i++;
		}
		else
		{
			tab[j] = malloc(sizeof(char) * (wrd_len(str + i) + 1));
			if (tab[j] == NULL)
			{
				free_char_grid(tab, j);
				return (NULL);
			}
			k = 0;
			while (str[i] && str[i] != ' ')
				tab[j][k++] = str[i++];
			tab[j][k] = '\0';
			j++;
		}
	}
	tab[j] = '\0';
	return (tab);
}
