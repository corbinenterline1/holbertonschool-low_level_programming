#include<stdio.h>
/**
 * main - Entry point
 * puts - Enters the string
 * puts - x4
 * Return: The Beautiful Bytes
 */
int	main(void)
{
	char	charType;
	int	intType;
	double	doubleType;
	float	floatType;

	printf("Size of a char: %ld byte(s)\n", sizeof(charType));
	printf("Size of a int: %ld byte(s)\n", sizeof(intType));
	printf("Size of a long int: %ld byte(s)\n", sizeof(intType));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(doubleType));
	printf("Size of a float: %ld byte(s)\n", sizeof(floatType));
	return(0);
}
