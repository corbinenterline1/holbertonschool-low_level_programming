#include "holberton.h"

/**
 * primer - function to check if number is prim
 * @a: will start at 2 for this function
 * @b: base number to be compared
 * if b % a equals 0, or b is less than 2, return 0 (not prime)
 * else if a == b - 1, return 1 (prime)
 * else if 'b' is greater than 'a', hit recursion with an incremented 'a'
 * go until determined not prime, else return it as prime
 *Return: 1 if prime, 0 if composite number)
 */
int primer(int a, int b)
{
	if (b % a == 0 || b < 2)
		return (0);
	else if (a == b - 1)
		return (1);
	else if (b > a)
		return (primer(++a, b));
	else
		return (1);
}
/**
 * is_prime_number - function to check if prime number
 * @n: number to check if prime
 * Return: result of primer function, with 2 & n as arguments
 */
int is_prime_number(int n)
{
	return (primer(2, n));
}
