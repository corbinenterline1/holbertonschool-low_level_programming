#include "hash_tables.h"

/**
 * hash_table_set - Adds element to hash table
 * @ht: hash table to add or update key/value to
 * @key: key. cannot be empty
 * @value: value associated with key. Can be empty.
 * Return: 1 if succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node = NULL, *sniffy = NULL;
	unsigned long int ki;/* (k)ey (i)ndex result */

	if (key == NULL || ht == NULL)/* no empty table or key */
		return (0);
	node = malloc(sizeof(hash_node_t));/* malloc node */
	if (node == NULL)/* malloc check */
		return (0);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (0);
	}
	ki = key_index((const unsigned char *)key, ht->size);
	sniffy = ht->array[ki];
	if (sniffy)
		node->next = sniffy;
	else
	{
		node->next = NULL;
		sniffy = node;
	}
	return (1);
}
