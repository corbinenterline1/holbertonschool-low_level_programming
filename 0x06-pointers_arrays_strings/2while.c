#include "holberton.h"

/**
 * _strncat - copies string src onto end of dest by n bytes
 * @dest: destination string
 * @src: source string that is put at end of dest string
 * set a char pointer (ptr) to end of dest with strlen
 * while source isn't null byte, and n isn't zero
 * put src byte where ptr is, then advance both, and decrease n
 * this ensures you don't put too many bytes
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return(ptr);
