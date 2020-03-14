#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * use an unsigned int a to compare to n
 * start the list of arguments 'vat'
 * if there's a separator string, set b to equal the current argument
 * print b, then the separator string
 * after loop, print final argument with a newline
 * if separator is NULL, just loop and print the integers back to back
 * then newline. Finally, cleanup the argument list.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vat;
	unsigned int a;
	int b;

	va_start(vat, n);
	if (separator != NULL)
	{
		for (a = 1; a < n; a++)
		{
			b = 0;
			b = va_arg(vat, int);
			printf("%i%s", b, separator);
		}
		b = va_arg(vat, int);
		printf("%i\n", b);
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			b = 0;
			b = va_arg(vat, int);
			printf("%i", b);
		}
		printf("\n");
	}
	va_end(vat);
}
