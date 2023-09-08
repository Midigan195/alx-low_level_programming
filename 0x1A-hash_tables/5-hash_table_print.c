#include "stdio.h"
#include "hash_tables.h"
/**
 * hash_table_print - prints the contents of hash table
 * @ht: pointer to hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int printed = 0;
	hash_node_t *node = NULL;

	if (ht != NULL)
	{
		printf("{");
		while (i < ht->size)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				if (printed)
					printf(", ");
				printf("'%s': '%s'", node->key, node->value);
				printed = 1;
				node = node->next;
			}
			i++;
		}
		printf("}\n");
	}
}
