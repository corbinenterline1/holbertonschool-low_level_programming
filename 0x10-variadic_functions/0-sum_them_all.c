#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: number of parameters
 * initialize argument list
 * a is counter in for loop
 * add current argument value to b integer;
 * clean up the argument list
 * Return: sum of all arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list vat;
	int a, b;

	a = b = 0;
	va_start(vat, n);
	for (; a < (int) n; a++)
	{
		b += va_arg(vat, int);
	}
	va_end(vat);

	return (b);
}
