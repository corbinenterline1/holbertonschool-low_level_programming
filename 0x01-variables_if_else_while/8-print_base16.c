#include<stdio.h>
/**
 * main - Entry point
 * This command is printing the characters of hexadecimal
 * c = char for 0-9
 * ch = char for A-F
 * 1st for confirms c is 0, with condition of c greater than
 * or equal to 9. Increment of moving to next character.
 * 2nd for sets condition and stuff for A-F
 * 2nd putchar prints the string
 * 3rd putchar puts the newline
 * Return: Base 16!
 */
int main(void)
	{
	char c = '0';
	char ch = 'a';

	for (c = '0'; c <= '9'; c++)
	{
	putchar(c);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
