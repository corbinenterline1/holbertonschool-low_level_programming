#include "hash_tables.h"

/**
 * hash_table_delete - deletes hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int c = 0;
	hash_node_t *a, *b;

	if (ht == NULL)
		return;
	while (c < ht->size)
	{
		if (ht->array[c] != NULL)
		{
			a = ht->array[c];
			while (a)
			{
				b = a;
				a = a->next;
				free(b->key);
				free(b->value);
				free(b);
			}
		}
		c++;
	}
	free(ht->array);
	free(ht);
}
