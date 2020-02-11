#include "holberton.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 * This command print a string 10 times
 * for loop prints alphabet a-z
 * 2nd for loop prints new line until 10 lines
 * Return: abcdefghijklmnopqrstuvwxyz x10
 */
void print_alphabet_x10(void)
	{
	char ch = 'a';
	int i = 1;

	for (i = 1; i <= 10; i++)
	{
	for (ch = 'a'; ch <= 'z'; ch++)
	{
	_putchar(ch);
	}
	_putchar('\n');
	}
}
