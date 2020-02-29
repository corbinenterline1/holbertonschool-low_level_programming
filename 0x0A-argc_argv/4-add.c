#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * isitnumber - Uses isdigit to check each character of string for digit
 * @s: input string to check for numbers
 * Set int 'a' to cycle through string
 * if s at 'a' spot is a number, increment 'a'
 * else, return 0
 * Return: 1 if all numbers, 0 otherwise
 */
int isitnumber(char *s)
{
	int a;

	for (a = 0; s[a] != '\0';)
	{
		if (isdigit(s[a]))
			a++;
		else
			return (0);
	}
	return (1);
}
/**
 * main - Main function for adding up arguments
 * @argc: argument count
 * @argv: argument vector
 * if argc is less than 2, print 0, then return 0
 * else, set for loop with 'a' as counter
 * if current string is full of numbers, add to 'r' bucket
 * else, print error, and return 1
 * once all arguments are added, print result
 * Return: 0 if successful, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int a;
	int r = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (a = 1; a < argc; a++)
		{
			if (isitnumber(argv[a]))
				r += atoi(argv[a]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", r);
	return (0);
}
