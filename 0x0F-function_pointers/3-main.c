#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 *
 *
 */
int main(int argc, char *argv[])
{
	int a;
	int ((*ptr)(int, int));	

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == 0)
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
	a = ptr((atoi(argv[1])),(atoi(argv[3])));
		return (a);
}
