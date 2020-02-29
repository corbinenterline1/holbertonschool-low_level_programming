#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies 2 arguments to main and prints result
 * @argc: Argument count
 * @argv: Argument vector
 * As long as argc is 3, atoi arguments 1 & 2 held in n1 & n2 respectively
 * Then multiply the two, and store result in 'r'
 * Print r, followed by newline
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n1 = 0;
	int n2 = 0;
	int r;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n1 += atoi(argv[1]);
		n2 += atoi(argv[2]);
		r = n1 * n2;
		printf("%d\n", r);
		return (0);
	}
}
