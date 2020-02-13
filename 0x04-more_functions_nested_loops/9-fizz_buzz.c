#include "holberton.h"
#include <stdio.h>

/**
 * main - Prints numbers to 100, and changes multiples of 3 & 5
 * a@: integer used for counting to 100
 * first for loop sets counter to 100 & prints digits to 100
 * if the number is divisible by 3 & 5, aka by 15, print FizzBuzz
 * else, if a is divisible by 5, print Buzz in lieu of number
 * else, if a is divisible by 3, print Fizz in lieu of number
 * Result: 1-100, with key numbers replaced
 * Return: 0
 */
int main(void)
	{
	int a;

	for (a = 1; a <= 100; a++)
		{
		if ((a % 15) == 0)
			{
			printf("FizzBuzz ");
			}
		else if ((a % 5) == 0)
			{
			printf("Buzz ");
			}
		else if ((a % 3) == 0)
			{
			printf("Fizz ");
			}
		else
			{
			printf("%d ", a);
			}
		}
		putchar('\n');
		return (0);
	}
