#include "main.h"
/**
 * set_bit - Set specified bit at index
 * @n: integer to be indexed
 * @index: location of bit to be checked
 * Return: 1 if success ; -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int buff = 1;

	if (index > 32)
		return (-1);

	buff = buff << index;
	*n = *n ^ buff;

	return (1);
}
