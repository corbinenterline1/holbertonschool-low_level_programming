#include<stdlib.h>
#include<time.h>
#include<stdio.h>
#include<string.h>
/**
 * main - Going to call the functions below.
 * Description: This function assigns a random number to n.
 * It then checks the last digit of n to see if it is above 6 or higher,
 * 0, or 5 to 1. It then prints this result.
 * d stands for Last Digit
 * n % 10 uses a modulo operator to divide n by ten, finding it's last digit.
 * Return: The last digit, and it's associated group.
 */
int main(void)
{
	int n;
	int d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = n % 10;
	if (d > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, d);
	}
	else if (d == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, d);
	}
	else
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, d);
	}
	return (0);
}
