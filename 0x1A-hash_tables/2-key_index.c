#include "hash_tables.h"

/**
 * key_index - Gives the index of a key
 * @key: Given key
 * @size: size of the array of the hash table
 * Uses hash_djb2 function
 * Return: index at which the key/value pair should be stored in array
 * of the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i = hash_djb2(key) % size;
/** (i)ndex is key ran through djb2, modulo by array size. */
	return (i);
}
