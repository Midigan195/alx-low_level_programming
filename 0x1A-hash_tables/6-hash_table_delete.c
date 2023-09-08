#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_delete - Deletes given hashtable
 * @ht: pointer to hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *curr = NULL;
	hash_node_t *temp = NULL;

	if (ht != NULL)
	{
		while (i < ht->size)
		{
			curr = ht->array[i];
			while (curr != NULL)
			{
				temp = curr;
				curr = curr->next;
				free(temp->key);
				free(temp->value);
				free(temp);
			}
			i++;
		}
		free(ht->array);
		free(ht);
	}
}
