#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	const hash_table_t *pt = NULL;
	unsigned long int c = 0;
	hash_node_t *prt = NULL;
	int f = 0;

	if (ht == NULL)
		return;
	pt = ht;
	printf("{");
	while (c < pt->size)
	{
		if (pt->array[c])
		{
			if (f > 0)
				printf(", ");
			printf("'%s': ", pt->array[c]->key);
			printf("'%s'", pt->array[c]->value);
			if (pt->array[c]->next != NULL)
			{
				prt = pt->array[c]->next;
				while (prt != NULL)
				{	printf(", ");
					printf("'%s': ", prt->key);
					printf("'%s'", prt->value);
					prt = prt->next;
				}
			}
			f++;
		}
		c++;
	}
	printf("}\n");
}
