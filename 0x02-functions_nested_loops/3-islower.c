#include "holberton.h"

/**
 * Checks lowercase of characters
 * This checks ascii values for lowercase or uppercase
 * Return: 1 for lowercase, 0 otherwise
 */

int _islower(int c)
	{

	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
