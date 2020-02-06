#include<stdio.h>
/**
 * main - Entry point
 * c = char for lowercase
 * ch = char for uppercase
 * for puts a, through z, in increments
 * putchar puts the character string
 * 2nd for sets condition and stuff for capital alphabet
 * 2nd putchar prints the Uppercase alphabet
 * 3rd putchar puts the newline
 * Return: the lowercase alphabet
 */
int main(void)
	{
	char c = 'a';
	char ch = 'A';

	for (c = 'a'; c <= 'z'; c++)
	{
	putchar(c);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
