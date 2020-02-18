#include "holberton.h"

/**
 *
 *
 *
 */
int _strlen(char *s)
	{
	char *a = s;

	while (*a != '\0')
	{
		a++;
	}
	return (a - s);
}
