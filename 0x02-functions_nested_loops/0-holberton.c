#include "holberton.h"
/**
 * main - Entry point
 * char variable is the string "Holberton\0", defined as word with array of 10.
 * int declares an int with ascii value of 0
 * while i is less than 10 (length of string), putchar word[i], then advance 1
 * Return: Holberton
 */
int main(void)
	{
	char word[9] = "Holberton";
	int i = 0;

	while (i < 9)
	{
	_putchar(word[i]);
	i++;
	}
	_putchar('\n');
	return (0);
}
