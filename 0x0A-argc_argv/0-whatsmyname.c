#include "holberton.h"
#include <stdio.h>

/**
 * main - main function to print its own program name
 * @argc: Argument count
 * @argv: Argument vector. First argument is always program name.
 * Set argc to i, then set i to 0.
 * Printf the string at argv[i], aka argv[0]
 * Return: 0, exit success.
 */
int main(int argc, char *argv[])
{
	int i = argc;

	i = 0;
		printf("%s\n", argv[i]);
	return (0);
}
