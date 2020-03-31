#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file to create
 * @text_content: null-terminated string to write to file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, l, wr;

	if (filename == NULL)
		return (-1);
	/* open filename, read/write, file offset at end for append)*/
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	if (!text_content)
		return (1);
	if (text_content)
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
