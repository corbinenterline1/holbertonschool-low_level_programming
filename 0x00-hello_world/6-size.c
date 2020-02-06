#include<stdio.h>
/**
 * main - Entry point
 * char displays char byte value
 * int displays int byte value
 * long int displays double byte value
 * long long int displays double byte value
 * float displays float byte value
 * Return: The full list of data types with their byte values!
 */
int	main(void)
{
	char	c;
	int	i;
	double	d;

	printf("Size of a char: %ld byte(s)\n",	sizeof(c));
	printf("Size of an int: %ld byte(s)\n",	sizeof(i));
	printf("Size of a long int: %ld byte(s)\n",	sizeof(d));
	printf("Size of a long long int: %ld byte(s)\n",	sizeof(d));
	printf("Size of a float: %ld byte(s)\n",	sizeof(i));
	return (0);
}
