#include<stdio.h>
/**
 * main - Entry point
 * This command is printing 0-9
 * a = int for 0-9
 * while loops while a is less than 10
 * 1st putchar puts the current number count down
 * 2nd putchar puts the,
 * 3rd putchar puts the space after ,
 * Return: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
 */
int main(void)
	{
	int i = 48;

	for (i = 48; i <= 57; i++)
	{
	putchar(i);
	if (i < 57)
	{
	putchar(',');
	putchar(' ');
	}
	else
	putchar('\n');
	}
	return (0);
}

