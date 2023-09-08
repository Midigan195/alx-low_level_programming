#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
/**
 * hash_table_get - retrives value associated with a specific key
 * @ht: Hash table to be searched through
 * @key: Key to be searched for
 * Return: Value associated with key; Null if value could not be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *val_p = NULL;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);
	val_p = (ht->array[key_index((const unsigned char *)key, ht->size)]);
	if (val_p == NULL)
		return (NULL);
	return (val_p->value);
}
