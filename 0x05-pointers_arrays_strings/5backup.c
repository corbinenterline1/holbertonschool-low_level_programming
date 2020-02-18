#include "holberton.h"

/**
 * rev_string - Reverses input string
 * @s: input string
 * t is temp, holds value while we switch
 * i is counter
 * l is length - 1 (can't figure out why reverse doesn't work without it)
 * for i is zero, i gotta stay less than length divided by 2
 * because you don't want to swap both halves of string twice, it'd be normal
 * each iteration, set t to string value at i
 * then set string spot it to string spot l
 * then set string spot l to t, ole switcheroo
 * decrement l(ength) by 1
 * Result: string in reverse
 */
void rev_string(char *s)
{
	char t;
	int i;
	int l;

	l = 0;
	while (s[l] != '\0')
	{
		l++;
	}
	l--;
	for (i = 0; i < l / 2; i++)
	{
		t = s[i];
		s[i] = s[l];
		s[l] = t;
		l--;
	}
}
