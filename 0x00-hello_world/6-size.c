#include<stdio.h>
/**
 * main - Entry point
 * @char displays char 
 * 
 * 
 */
int	main(void)
{
	char	charType;
	int	intType;
	double	doubleType;
	float	floatType;

	printf("Size of a char: %ld byte(s)\n", sizeof(charType));
	printf("Size of an int: %ld byte(s)\n", sizeof(intType));
	printf("Size of a long int: %ld byte(s)\n", sizeof(doubleType));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(doubleType));
	printf("Size of a float: %ld byte(s)\n", sizeof(floatType));
	return (0);
}
