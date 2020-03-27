#include "holberton.h"

/**
 * flip_bits - Returns number of bits to flip to get one number to another
 * @n: first number
 * @m: 2nd number
 * Calculate XOR of A & B
 * Count the set bits in the above calculated XOR result
 * Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (countSetBits(n ^ m));

}

/**
 * countSetBits - Counts the Set Bits
 * @n: input number
 * XOR of two number will have set bits only at those places where
 * A differs from B.
 * Return: count
 */
unsigned int countSetBits(unsigned long int n)
{
	int c = 0;

	while (n)
	{
		c += n & 1;
		n >>= 1;
	}
	return (c);
}
