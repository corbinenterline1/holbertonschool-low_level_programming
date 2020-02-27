#include "holberton.h"

/**
 * is_palindrome - function that checks if input string is a palindrome
 * @s: input char string
 * set variable l to the length of the string
 * if l is 0, return 1 (empty string is a palindrome)
 * else, return result of palipal function, with beginning int 'b'
 * set to 0, and ending int 'e' to length minus 1 (to account for terminator)
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int l = _strlen_recursion(s);

	if (l == 0)
		return (1);
	else
		return (palipal(s, 0, l - 1));
}
/**
 * _strlen_recursion - gets length of string using recursion
 * @s: input string
 * if the string isn't at terminator
 * return 1 + function(s + 1)
 * This calls next version of function, until string is at terminator
 * then it returns 1 for that function, each function until orginal
 * Which will equal the string length
 * Return: length of string, in bytes, else 0;
 */
int _strlen_recursion(char *s)
{

	if (s[0] != '\0')
		return (1 + _strlen_recursion(++s));
	else
		return (0);
}
/**
 * palipal - Palindrome pal, recursive function that checks if string
 * is a palindrome or not.
 * @s: input string
 * @b: beginning counter
 * @e: ending counter
 * if b equals e, return 1 (only one character)
 * Return: 1 if palindrome, 0 if not
 */
int palipal(char *s, int b, int e)
{
	/* if there is only one character */
	if (b == e)
		return (1);
	/* if first & last characters don't match */
	else if (s[b] != s[e])
		return (0);
	/**
	 * if there are more than two characters, check if
	 * middle substring is also palindrome or not.
	 */
	else if (b < e + 1)
		return (palipal(s, b + 1, e - 1));
	else
		return (1);
}
