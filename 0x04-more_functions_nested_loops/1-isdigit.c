#include "holberton.h"

/**
 * _isdigit - checks for a digit.
 * @c: is value from main function
 * first if checks if the value is between 0-9 ASCII value.
 * Return: 1 for digits, 0 otherwise.
 */
int _isdigit(int c)
	{
	if (c >= 48 && c <= 57)
		{
		return (1);
		}
	else
		{
		return (0);
		}
	}
