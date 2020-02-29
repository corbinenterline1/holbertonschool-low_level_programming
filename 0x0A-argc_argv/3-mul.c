#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies 2 arguments to main and prints result
 * @argc: Argument count
 * @argv: Argument vector
 * As long as argc is 3,atoi argv[1] times atoi argv[2]
 * Print r, followed by newline
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int r;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		r = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", r);
		return (0);
	}
}
