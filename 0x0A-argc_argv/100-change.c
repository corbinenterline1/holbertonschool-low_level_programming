#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Main function to determining minimum number of coins to reach amount
 * @argc: argument count
 * @argv: argument vector
 * if argc isn't two, print "Error" and return 1
 * else, atoi the string into an int value and put into 'b'ucket
 * if b > 0
 * run for loop nests, going down from highest coins to lowest 25,10,5,2(?),1
 * for each iteration of a for loop, lower that amount from bucket
 * and increment 'c'. At end, print total of 'c'
 * Return: 1 if an error, 0 after the result, or a negative number
 */
int main(int argc, char *argv[])
{
	int b, c;

	b = c = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		b += atoi(argv[1]);
		if (b > 0)
		{
			for (; b >= 25; c++)
				b -= 25;
			for (; b >= 10; c++)
				b -= 10;
			for (; b >= 5; c++)
				b -= 5;
			for (; b >= 2; c++)
				b -= 2;
			for (; b > 0;)
				c++;
				b -= 1;
			printf("%d\n", c);
			return (0);
		}
		else if (b < 0)
		{
			printf("0\n");
			return (0);
		}
	}
	return (0);
}
