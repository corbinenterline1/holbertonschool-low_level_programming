#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * use an unsigned int a to compare to n
 * start the list of arguments 'vat'
 * if there's a separator string, set ptr to equal the current argument
 * print string at pointer, then separator string;
 * if current argument is NULL, print (nil) then separator
 * after loop, print final argument with a newline
 * if separator is NULL, just loop and print the strings back to back
 * then newline. Finally, cleanup the argument list.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vat;
	unsigned int a;
	char *ptr;

	va_start(vat, n);
	if (n < 1)
		printf("\n");
		return;
	if (separator != NULL)
	{
		for (a = 1; a < n; a++)
		{
			ptr = va_arg(vat, char *);
			if (ptr != NULL)
				printf("%s%s", ptr, separator);
			else
				printf("(nil)%s", separator);
		}
		ptr = va_arg(vat, char *);
		if (ptr != NULL)
			printf("%s\n", ptr);
		else
			printf("(nil)\n");
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			ptr = va_arg(vat, char *);
			if (ptr != NULL)
				printf("%s", ptr);
			else
				printf("(nil)");
		}
		printf("\n");
	}
	va_end(vat);
}
