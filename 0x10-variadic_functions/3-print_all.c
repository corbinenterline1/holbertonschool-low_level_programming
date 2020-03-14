#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - prints anything, based off of format list
 * @format: list of types of arguments passed to the function
 * set sep(arator) to nothing for first argument
 * if format is NULL, get outta there
 * start list of arguments vat
 * while format[a], switch statement
 * print appropriate type with separator, from arg list
 * after first case, change separator to ", " and increment a
 */
void print_all(const char * const format, ...)
{
	va_list vat;
	int a = 0;
	char *ptr;

	while (format == NULL)
	{
		printf("\n");
		return;
	}
	va_start(vat, format);
	while (format[a] != '\0')
	{
		switch (format[a])
		{
			case 'c':
				printf("%c", (char) va_arg(vat, int));
				break;
			case 'i':
				printf("%d", va_arg(vat, int));
				break;
			case 'f':
				printf("%f", va_arg(vat, double));
				break;
			case 's':
				ptr = va_arg(vat, char*);
				if (ptr == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", ptr);
				break;
		}
		if ((format[a] == 'c' || format[a] == 'i' || format[a] == 'f' ||
		format[a] == 's') && format[a + 1] != '\0')
			printf(", ");
		a++;
	}
	printf("\n");
	va_end(vat);
}
