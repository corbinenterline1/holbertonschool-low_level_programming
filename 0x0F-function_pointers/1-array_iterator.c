#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - function that executes a function given as
 * a parameter on each element of an array
 * @array: input array
 * @size: size of array
 * @action: function to be executed
 * check if anything's null, otherwise
 * iterate (*action)(array[a]) while size isn't 0, increment a
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int a = 0;

	if (action != NULL && array != NULL && size > 0)
	{
		while (size > 0)
		{
		(*action)(array[a]);
		size--;
		a++;
		}
	}
}
