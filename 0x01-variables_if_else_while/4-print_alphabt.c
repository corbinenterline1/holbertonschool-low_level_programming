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
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	if (ch == 'f' || ch == 'p')
	{
	putchar('\b');
	}
	putchar(ch);
	}
	return (0);
}
