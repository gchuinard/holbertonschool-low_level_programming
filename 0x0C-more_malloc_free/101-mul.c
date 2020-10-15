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
 * _putchar - print a character.
 *
 * @c: the character to display.
 *
 * Return: void
 */

int	_putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _putstr - print a string.
 *
 * @str: the string to display.
 *
 * Return: void
 */

void	_putstr(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
}

/**
 * _print - moves a string one place to the left and prints the string.
 *
 * @str: string to move.
 * @l: size of string.
 *
 * Return: void
 */

void	_print(char *str, int l)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < l)
	{
		if (str[i] != '0')
		{
			j = 1;
		}
		if (j || i == l - 1)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
	free(str);
}

/**
 * mul - multiplies a char with a string and places the answer into dest.
 *
 * @n: char to multiply.
 * @num: string to multiply.
 * @num_index: last non NULL index of num.
 * @dest: destination of multiplication.
 * @dest_index: highest index to start addition.
 *
 * Return: pointer to dest, or NULL on failure
 */

char	*mul(char n, char *num, int num_index, char *dest, int dest_index)
{
	int	i;
	int	j;
	int	mul;
	int	mulrem;
	int	add;
	int	addrem;

	mulrem = 0;
	addrem = 0;
	i = num_index;
	j = dest_index;
	while (i >= 0)
	{
		mul = (n - '0') * (num[i] - '0') + mulrem;
		mulrem = mul / 10;
		add = (dest[j] - '0') + (mul % 10) + addrem;
		addrem = add / 10;
		dest[j] = add % 10 + '0';
		i--;
		j--;
	}
	addrem += mulrem;
	while (j >= 0 && addrem)
	{
		add = (dest[j] - '0') + addrem;
		addrem = add / 10;
		dest[j] = add % 10 + '0';
		j--;
	}
	if (addrem)
	{
		return (NULL);
	}
	return (dest);
}

/**
 * _isdigit_tab - Check if the tab is only compose of numbers.
 *
 * @tab: the tab.
 *
 * Return:1 (Success) or 0 (Fail).
 */

int	_isdigit_tab(char **tab)
{
	unsigned int	i;
	unsigned int	j;

	while (tab[i])
	{
		while (tab[i][j])
		{
			if (tab[i][j] <= '0' || tab[i][j] >= '9')
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

/**
 * init_str - initializes a string.
 *
 * @str: sting to initialize.
 * @l: length of string.
 *
 * Return: void
 */

void	init_str(char *str, int l)
{
	int i;

	i = 0;
	while (i < l)
	{
		str[i] = '0';
		i++;
	}
	str[i] = '\0';
}

/**
 * main - multiply two numbers.
 *
 * @argc: number of arguments.
 * @argv: argument vector.
 *
 * Return: 0 or exit status of 98 if failure.
 */

int main(int argc, char *argv[])
{
	int	len1;
	int	len2;
	int	len;
	int	i;
	int	j;
	char	*result;
	char	*sub_result;

	if (argc != 3 || _isdigit_tab(argv))
	{
		_putstr("Error\n");
		exit(98);
	}
	len1 = _strlen(argv[1]);
	len2 = _strlen(argv[2]);
	len = len1 + len2 + 1;
	result = (char *)malloc(sizeof(char) * len);
	if (result == NULL)
	{
		_putstr("Error\n");
		exit(98);
	}
	init_str(result, len - 1);
	j = len2 - 1;
	i = 0;
	while (j >= 0)
	{
		sub_result = mul(argv[2][j], argv[1], len1 - 1, result, (len - 2) - i);
		if (sub_result == NULL)
		{
			_putstr("Error\n");
			free(result);
			exit(98);
		}
		j--;
		i++;
	}
	_print(result, len - 1);
	return (0);
}
