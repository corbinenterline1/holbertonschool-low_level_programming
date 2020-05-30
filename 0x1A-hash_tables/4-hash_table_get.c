#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: hash table to search
 * @key: key to be looked for
 * Return: the value associated with the elemnt, otherwise NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{/* Sniffy is for searching(sniffing) stuff */
	hash_node_t *sniffy = NULL;
	unsigned long int ki;
	/* (k)ey (i)ndex is result of key_index */
	if (key == NULL || ht == NULL)/* no empty table or key */
		return (NULL);
	ki = key_index((const unsigned char *)key, ht->size);/* key index */
	sniffy = ht->array[ki];/* set sniffy to key index of array */
	if (!sniffy)
		return (NULL);
	while (sniffy)
	{/*search list at keyindex of array */
		if (strcmp(sniffy->key, key) == 0)
			return (sniffy->value);
		sniffy = sniffy->next;
	}
	return (NULL);
}
