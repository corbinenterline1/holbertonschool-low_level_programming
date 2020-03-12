#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - gets the correct arithmetic function from
 * the op_t struct.
 * @s: input argument string 2 from main (where operator should be)
 * 'i' counts through elements of struct
 * if the op member at ops[i] equals the input argument, return pointer
 * to said function. Otherwise increment i
 * if no members of .op from any of the elements match input argument, NULL
 * Return: pointer to the appropriate function, or NULL if fail
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
};
	int i;

	i = 0;
	while (i < 5)
	{
		if (*ops[i].op == *s && *(s + 1) == '\0')
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
