#include<stdio.h>
/**
 * main - Entry point
 * ch = character
 * for puts a, through z, in increments
 * putchar puts the character string
 * 2nd putchar puts the newline
 * Return: the lowercase alphabet
 */
int main(void)
	{
	char ch = 'z';

	for (ch = 'z'; ch >= 'a'; ch--)
	putchar(ch);
	putchar('\n');
	return (0);
}
