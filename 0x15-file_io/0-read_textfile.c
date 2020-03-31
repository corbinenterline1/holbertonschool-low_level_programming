#include "holberton.h"

/**
 * read_textfile - Reads a text file & prints it to the standard output
 * @filename: filename
 * @letters: number of letters it should read & print
 * Return: actual number of letters it could read & print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wr;
	char buf[(1024 * 8)];

	if (!filename || letters == 0)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	rd = read(fd, &buf[0], letters);
	if (rd == -1)
		return (0);
	wr = write(STDOUT_FILENO, &buf[0], rd);
	close(fd);
	if (wr == -1)
		return (0);
	return (wr);
}
