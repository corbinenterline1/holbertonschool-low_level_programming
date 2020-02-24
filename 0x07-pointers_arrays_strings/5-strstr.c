#include "holberton.h"

/**
 * *_strstr - Locates first ocurrence of the substring *needle
 * in the string *haystack. Terminators are not compared.
 * @haystack: String to be searched
 * @needle: substring to search for in haystack
 * set a bucket with a
 * while haystack isn't terminator, set haystack to a
 * while haystack & needle & haystack equals needle, this means
 * first character of a sub string match, check for whole string
 * if statement completes sub string match, returns starting address
 * otherwise, increment haystack + 1
 * Return: starting address of matched substring, or null
 */
char *_strstr(char *haystack, char *needle)
{
	char *a;

	while (*haystack != '\0')
	{
		a = haystack;
		while (*haystack && *needle && *haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (a);
		haystack = a + 1;
	}
	return (0);
}
