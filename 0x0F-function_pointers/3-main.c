#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Performs simple operations
 * @argc: number of arguments
 * @argv: pointer to array of arguments
 * create a function pointer that matches format for op_functions
 * 'b' integer is bucket for results
 * if argument count isn't 4, that means arguments don't follow formula
 * of 'calc num1 operator num2'. Error out
 * if they try to divide or modulo by 0, error out
 * set function pointer 'ptr' to result of get_op_func(argv2, which is
 * the operator
 * if the ptr is null, error out.
 * The result of the get_op_func is where ptr is pointing
 * so set 'b' to be the result of said function, using atoi on both
 * the relative arguments to main.
 * print the result
 * Return: 0 and the printed result, exit with error status code otherwise
 */
int main(int argc, char *argv[])
{
	int b;

	int ((*ptr)(int, int));


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	ptr = get_op_func(argv[2]);
	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	b = ptr(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", b);
	return (0);
}
