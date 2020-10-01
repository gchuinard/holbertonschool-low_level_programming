#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string.
 *
 * @str: the string.
 *
 * Return: the string capitalize.
 *
 */
char	*cap_string(char *str)
{
	int	i;
	char	sep[] = " \t\n;,.!?\"(){}\0";
	int	j;
	bool	is_sep;

	i = 0;
	is_sep = true;
	while (str[i])
	{
		j = 0;
		if (is_sep)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
			}
			is_sep = false;
		}
		while (sep[j])
		{
			if (str[i] == sep[j])
			{
				is_sep = true;
			}
			j++;
		}
		i++;
	}
	return (str);
}


int main(void)
{
	char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
	char *p;

	p = cap_string(s);
	printf("%s", p);
	printf("%s", s);
	return (0);
}
