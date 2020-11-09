#include "holberton.h"

/**
 * create_file - creates a file.
 *
 * @filename: the path of the file.
 * @text_content: the content of the file to write in.
 *
 * Return: 1 success or -1 if fail
 */

int	create_file(const char *filename, char *text_content)
{
	int	fd;
	size_t	len;
	ssize_t	w;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (filename != NULL && fd > -1)
	{
		len = 0;
		if (text_content != NULL)
		{
			while (text_content[len])
			{
				len++;
			}

		}
		w = 0;
		if (len > 0)
		{
			w = write(fd, text_content, len);
		}
		close(fd);
		if (w > -1)
		{
			return (1);
		}
	}
	return (-1);
}
