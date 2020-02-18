#include "holberton.h"

/**
 * _strlen - gets length of string
 * @s: input string
 * Increments string & l(ength) while s doesn't equal 0(line break)
 * Return: length of string
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != 0)
	{
		s++;
		l++;
	}
	return (l);
}
/**
 * rev_string - Function reversing string using pointers
 * @s: input string
 * first, get length of string
 * set b(eginning) and e(nd) initially to start of string
 * first for loop moves e to the last character
 * 2nd for loop swaps the char from start and end index
 * using b(eginning) and e(nd)
 * swap characters c & *e, *e with *b, then *b with c
 * then update pointers positions
 * Result: reversed string!
 */
void rev_string(char *s)
{
	char *b;
	char *e;
	char c;
	int i;
	int l;

	l = _strlen(s);
	b = s;
	e = s;
	for (i = 0; i < l - 1; i++)
	{
		e++;
	}
	for (i = 0; i < l / 2; i++)
	{
		c = *e;
		*e = *b;
		*b = c;
		b++;
		e--;
	}
}
