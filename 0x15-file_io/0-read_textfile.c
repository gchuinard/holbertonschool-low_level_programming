#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * standard output.
 *
 * @filename : name of the file to read.
 * @letters : number of letters it should read and print.
 *
 * Return: the numbers of letters
 */

ssize_t	read_textfile(const char *filename, size_t letters)
{
	int	fd;
	int	r;
	ssize_t	w;
	char	*buf;

	fd = open(filename, O_RDONLY);
	if (filename == NULL || fd == -1)
	{
		return (0);
	}
	buf = (char *)malloc(sizeof(char) * (letters + 1));
	if (buf == NULL)
	{
		return (0);
	}
	r = read(fd, buf, letters);
	if (r == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}
	buf[r] = '\0';
	w = write(STDOUT_FILENO, buf, r);
	if (w == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}
	close(fd);
	free(buf);
	return (w);

}
