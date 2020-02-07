#include<stdio.h>
/**
 * main - Entry point
 * ch = character
 * while ch is less than or equal to z:
 * putchar continues the character string
 * if statement nested in while
 * skips 1 character (++ch) if ch == e or o
 * 2nd putchar puts the newline
 * Return: the lowercase alphabet minus e or p
 */
int main(void)
	{
	char ch = 'a';

	while (ch <= 'z')
	{
	putchar(ch++);
	if (ch == 'e' || ch == 'q')
	++ch;
	}
	putchar('\n');
	return (0);
}
