#include "holberton.h"
/**
 * print_alphabet - prints the lowercase alphabet
 * ch = character
 * for puts a, through z, in increments
 * putchar puts the character string
 * 2nd putchar puts the newline
 * Return: the lowercase alphabet
 */
void print_alphabet(void)
	{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	_putchar(ch);
	_putchar('\n');
}
