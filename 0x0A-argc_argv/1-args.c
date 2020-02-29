#include "holberton.h"
#include <stdio.h>

/**
 * main - prints number of arguments to main
 * @argc: argument count
 * @argv: argument vector
 * void argv
 * print the number of arguments, minus 1 (not counting program name)
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
