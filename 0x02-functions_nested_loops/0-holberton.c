#include"holberton.h"
/**
 * main - Entry point
 * This command print a string
 * puts (The string "Holberton"),
 * Return: Holberton
 */
int main(void)
	{
	char word[10] = "Holberton\0";
	int i = 0;

	while (i < 10)
	{
	_putchar(word[i]);
	i++;
	}
	_putchar('\n');
	return (0);
}
