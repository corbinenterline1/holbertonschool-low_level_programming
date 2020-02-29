#include "holberton.h"
#include <stdio.h>

/**
 * main - Prints out all arguments to main
 * @argc: argument count
 * @argv: argument vector containing all argument strings
 * set int c for counter
 * for loop while c is less than argc
 * print string at 'c' spot
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int c;

	for (c = 0; c < argc; c++)
		printf("%s\n", argv[c]);
	return (0);
}
