#include "holberton.h"

/**
 * _strncat - Concanates string src to end of dest by n number of bytes
 * @dest: destination string
 * @src: source string that is put at end of dest string
 * @n: number of bytes to copy
 * first for loop sets int a to end of destination string
 * second for loop sets b to 0, then adds source to destination
 * at spot where a + b (this means a is end of dest, while b starts at 0
 * and increments). Go until either n is 0, or source is at null byte.
 * Return: destination with appended string of n bytes
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	for (a = 0; dest[a] != '\0'; a++);
	for (b = 0; src[b] != '\0' && n != 0; b++, n--)
	{
		dest[a + b] = src[b];
	}
	return (dest);
}
