#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_create - Creates a new hash table and returns pointer
 * @size: Size of new hash table
 * Return: Pointer to new hash table on sucess; Null on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = malloc(sizeof(hash_table_t));
	unsigned long int i = 0;

	if (new_table == NULL)
		return (NULL);
	new_table->array = malloc(sizeof(hash_node_t) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	new_table->size = size;
	while (i < size)
	{
		new_table->array[i] = NULL;
		i++;
	}
	return (new_table);
}
