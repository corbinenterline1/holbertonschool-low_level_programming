#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main - Going to call the functions below.
 * Description: This function assigns a random number to 0.
 * It then checks whether that 0 is positive. If not, it
 * Checks to see whether t is 0. If not, it assumes it is negative.
 * The program then prints the result.
 * Return: Whether the variable is positive, 0, or negative.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	else
	{
	printf("%d is negative\n", n);
	}
	return (0);
}
