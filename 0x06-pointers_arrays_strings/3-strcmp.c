#include "holberton.h"

/**
 * _strcmp - Compares strings' ASCII values, character by character.
 * @s1: first string for comparison
 * @s2: second string for comparison
 * While s1 & s2 dont equal null byte, & s1 equals s2
 * Advance both strings (no return)
 * 2 different characters breaks the while loop, if they both are same
 * return 0 (for null bytes), else
 * Return: difference of s2 from s1
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 == *s2) && (*s1 != '\0' && *s2 != '\0'))
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	return (*s1 - *s2);
}
