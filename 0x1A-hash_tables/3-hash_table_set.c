#include "hash_tables.h"

/**
 *
 *
 *
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *nv = NULL;
	hash_node_t *node = NULL, *old = NULL;
	unsigned long int ki, c = 0;/* (k)ey (i)ndex result (c)ounter */

	if (key == NULL || ht == NULL)/* no empty table or key */
		return (0);
	ki = key_index((const unsigned char *)key, ht->size);
	if (nv != NULL)/* value must be duplicated, it can be empty */
		nv = strdup(value);
	node = malloc(sizeof(hash_node_t));/* malloc node */
	if (node == NULL)/* malloc check */
		return (0);
	node->key = (char *)key;
	node->value = nv;
	if (ht->array[ki] == NULL)
	{
		ht->array[ki] = node;
		node->next = NULL;
	}
	else
	{
		old = ht->array[ki];
		node->next = old;
		old->next = NULL;
	}
	return (1);
}
