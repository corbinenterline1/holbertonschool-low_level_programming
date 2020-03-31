#include "holberton.h"

/**
 * create_file - Creates a file
 * @filename: name of the file to create
 * @text_content: null-terminated string to write to file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, l, wr;

	if (filename == NULL)
		return (-1);
	/* open filename, readwrite, create if not there, truncate */
	/* set permissions to read & write for user */
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		l = _strlen(text_content);
		wr = write(fd, text_content, l);
	}
	if (wr == -1)
		return (-1);
	return (1);
}

/**
 * _strlen - Returns length of string
 * @s: char string input
 * while s doesn't equal 0 (ascii value of breakline), increase length count
 * and count on string, equally.
 * Return: l, aka length of string
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != 0)
	{
		s++;
		l++;
	}
	return (l);
}
