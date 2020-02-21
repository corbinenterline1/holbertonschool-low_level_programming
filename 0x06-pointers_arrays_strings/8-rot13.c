#include "holberton.h"

/**
 * *rot13 - Converts strings of words using rot(ation)13 encryption
 * @s: input string
 * c is counter
 * d is counter for end of double alphabet (52 characters)
 * a1 is alphabet, then uppercase
 * a2 is alphabet rotated 13, then uppercase
 * set c to zero, then make while loop as c progresses through s
 * in loop, set d to 0, then enter 2nd loop. While d < 52
 * check if c spot of string is equal to spot on alphabet
 * if same letter, swap with rotated alphabet. if not, increment d.
 * d increments through full 52 alphabet for each byte of c increment
 * Return: String "encrypted" by rot13
 */
char *rot13(char *s)
{
	int c;
	int d;
	char a1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char a2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	c = 0;
	while (s[c])
	{
		d = 0;
		while (d < 51)
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
