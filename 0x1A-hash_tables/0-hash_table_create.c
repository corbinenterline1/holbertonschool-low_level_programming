#include "hash_tables.h"

/**
 * hash_table_create - Creates a new Hash Table!
 * @size: Size of the associative array
 * Return: Pointer to new hash table, or NULL if something fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *nt = malloc(sizeof(hash_table_t));/** (n)ew (t)able */
	unsigned long int c = 0;/** loop (c)ounter */

	if (size < 1)
	{
		return (NULL);
	}
	if (nt == NULL)/** malloc check */
		return (NULL);
	nt->size = size;/** assign size value */
	nt->array = malloc((sizeof(hash_table_t)) * size);
	if (nt->array == NULL)
	{/** malloc check, free table if array failed */
		free(nt);
		return (NULL);
	}
	for (; c < size; c++)/** initialize indexes of array to NULL */
		nt->array[c] = NULL;
	return (nt);
}
