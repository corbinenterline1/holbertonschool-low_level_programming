#include "holberton.h"

/**
 * _islower - function to check lowercase
 *
 * @c: character to check for value
 * Return:  1 for lowercase, 0 for uppercase
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
