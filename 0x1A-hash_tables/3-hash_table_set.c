#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
/**
 * hash_table_set - adds elements to hash table
 * @ht: pointer to hash table
 * @key: pointer to key to be used
 * @value: value to be added to hash table
 * Return: 1 on sucess; otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_item = NULL;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	new_item = malloc(sizeof(hash_node_t));
	if (new_item == NULL)
		return (0);
	new_item->key = (char *)key;
	new_item->value = strdup(value);
	new_item->next = NULL;
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_item;
	}
	else
	{
		new_item->next = ht->array[index];
		ht->array[index] = new_item;
	}

	return (1);
}
