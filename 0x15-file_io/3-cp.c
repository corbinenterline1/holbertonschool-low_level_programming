#include "holberton.h"
#define RWRWR (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - Copies content of a file to another file
 * @argc: argument count
 * @argv: array of arguments to main
 * Return: 0 if successful, -1 otherwise
 */
int main(int argc, char *argv[])
{
	int fd, from, to, wr;
	char buf[1024];

	precheckargc(argc);
	precheckfrom(argv[1]);
	precheckto(argv[2]);
	from = open(argv[1], O_RDONLY);
	to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, RWRWR);
	fd = read(from, buf, 1024);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	while (fd != 0)
	{
		wr = write(to, buf, fd);
		if (wr == -1 || wr != fd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			exit(99);
		}
		fd = read(from, buf, 1024);
		if (fd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
	}
	wr = close(from);
	fdcheck(wr, argv[1]);
	wr = close(to);
	fdcheck(wr, argv[2]);
	return (0);
}

/**
 * precheckargc - checks usage is correct
 * @argc: argument count
 */
void precheckargc(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * precheckfrom - checks if file_from is usable
 * @s: input filename
 */
void precheckfrom(char *s)
{
	if (s == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
		exit(98);
	}
}

/**
 * precheckto - checks if file_to is usable
 * @s: input filename
 */
void precheckto(char *s)
{
	if (s == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", s);
		exit(99);
	}
}

/**
 * fdcheck - checks if file descriptor can be closed
 * @wr: return code from close
 * @s: filename
 */
void fdcheck(int wr, char *s)
{
	if (wr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", s);
		exit(100);
	}
}
