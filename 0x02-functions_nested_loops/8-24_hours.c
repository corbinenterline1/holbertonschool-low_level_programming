#include "holberton.h"

/**
 * jack_bauer - print all the minutes of a day, with newlines
 * Return: prints all the times of the day, minute by minute
 */
void jack_bauer(void)
	{
	int m;
	int h;

	for (h = 0; h < 24; h++)
	{
	for (m = 0; m < 60; m++)
	{
	_putchar(h / 10 + '0');
	_putchar(h % 10 + '0');
	_putchar(':');
	_putchar(m / 10 + '0');
	_putchar(m % 10 + '0');
	_putchar('\n');
	}
	}
}
