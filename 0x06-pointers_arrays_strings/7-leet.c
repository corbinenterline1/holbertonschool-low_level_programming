#include "holberton.h"

/**
 * *leet - Converts string of words into basic leet speak
 * @s: input string
 * c is counter
 * d is counter for end of conversion (10 bytes in length)
 * a1 is alphabet
 * a2 is alphabet leeted out
 * set c to zero, then make while loop as c progresses through s
 * in loop, set d to 0, then enter 2nd loop. While d < 52
 * check if c spot of string is equal to spot on alphabet
 * if same letter, swap with leet alphabet. if not, increment d.
 * d increments through full leet alphabet for each byte of c increment
 * Return: basic leet-speak
 */
char *leet(char *s)
{
	int c;
	int d;
	char a1[] = "aeotlAEOTL";
	char a2[] = "4307143071";

	c = 0;
	while (s[c])
	{
		d = 0;
		while (d < 10)
		{
			if (s[c] == a1[d])
			{
				s[c] = a2[d];
			}
			d++;
		}
		c++;
	}
	return (s);
}
