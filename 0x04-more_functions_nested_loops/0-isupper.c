#include "holberton.h"

/**
 * _isupper - Functions that checks for uppercase character.
 * @c: character pulled from main function
 * if checks if character is within ASCII uppercase range.
 * Return: 1 for uppercase characters, 0 for lower.
 */
int _isupper(int c)
{
	if (c <= 90 && c >= 65)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
