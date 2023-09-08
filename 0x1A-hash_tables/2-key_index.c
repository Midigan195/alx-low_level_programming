#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * key_index - Gets the index to store item
 * @key: key to be hashed
 * @size: Size of the hash table
 * Return: The index where the key should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	hash_value = hash_djb2(key);
	return (hash_value % size);
}
