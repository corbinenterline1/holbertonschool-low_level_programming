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
	unsigned long int ki;

	if (key == NULL || ht == NULL)/* no empty table or key */
		return (0);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	ki = key_index((unsigned char *)key, ht->size);/* key index */
	sniffy = ht->array[ki];/* set sniffy to key index of array */
	if (!sniffy || strcmp(sniffy->key, key) == 0)
	{
		if (sniffy)
			free(sniffy->key), free(sniffy->value), free(sniffy);
		ht->array[ki] = node;
		node->next = NULL;
	}
	else
	{
		while (sniffy)
		{
			if (strcmp(sniffy->key, key) == 0)
			{
				free(sniffy->key);
				free(node->value);
				free(node->key);
				free(node);
				sniffy->value = strdup(value);
				return (1);
			}
			sniffy = sniffy->next;
		}
		node->next = ht->array[ki];
		ht->array[ki] = node;
	}
	return (1);
}
