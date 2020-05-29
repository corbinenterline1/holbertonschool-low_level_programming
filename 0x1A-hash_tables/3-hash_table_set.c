#include "hash_tables.h"

/**
 * hash_table_set - Adds element to hash table
 * @ht: hash table to add or update key/value to
 * @key: key. cannot be empty
 * @value: value associated with key. Can be empty.
 * Return: 1 if succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{/* node is new node, sniffy is for searching(sniffing) stuff */
	hash_node_t *node = NULL, *sniffy = NULL;
	unsigned long int ki;/* (k)ey (i)ndex result */

	if (key == NULL || ht == NULL)/* no empty table or key */
		return (0);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	ki = key_index((const unsigned char *)key, ht->size);/* key index */
	sniffy = ht->array[ki];/* set sniffy to key index of array */
	while (sniffy)/* if list exists, check if key exists. Update if so */
	{
		if (strcmp(sniffy->key, key) == 0)
		{
			free(sniffy->value);
			sniffy->value = strdup(value);
			return (1);
		}
		sniffy = sniffy->next;
	}
	sniffy = ht->array[ki];
	if (sniffy)
	{
		node->next = sniffy;
		ht->array[ki] = node;

	}
	else
	{
		node->next = NULL;
		sniffy = node;
	}
	return (1);
}
