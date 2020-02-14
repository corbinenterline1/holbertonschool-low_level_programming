#include <stdio.h>
#include "holberton.h"
#include <math.h>

/**
 * main - Prints largest prime number for n
 * first while loop is for when the number is divisible by 2
 * store 2, then divide by 2 repeatedly until odd.
 * For loop starts from 3 to square root of number;
 * During for loop, if number is divisible by current value (i),
 * then store factor as largest, and change the number by divide it
 * with the current number then continue.
 * Finally if number is greater than 2, it's not 1, so get max prime factor.
 * Return: 0
 */
int main(void)
{
	long n = 612852475143;
	int i;
	int m = -1;

	while (n % 2 == 0)
	{
		m = 2;
		n = n / 2;
	}
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			m = i;
			n = n / i;
		}
	}
	if (n > 2)
	{
		m = n;
	}
	printf("%d\n", m);
	return (0);
}

