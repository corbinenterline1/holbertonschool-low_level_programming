#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Returns the sum of a & b
 * @a: first int
 * @b: 2nd int
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns the difference of a & b
 * @a: first int
 * @b: 2nd int
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns the product of a & b
 * @a: first int
 * @b: 2nd int
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the result of the division of a & b
 * @a: first int
 * @b: 2nd int
 * Return: a / b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the remainder of the division of a by b
 * @a: first int
 * @b: 2nd int
 * Return: a % b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
