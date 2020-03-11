#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - function that prints name using another function
 * @name: input name
 * @f: function to be called
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
		(*f)(name);
}
