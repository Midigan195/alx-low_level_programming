#include "main.h"
/**
 * get_bit - Get the state of a bit at specified index
 * @n: integer to be indexed
 * @index: location of bit to be checked
 * Return: value of bit at index ; -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int buff = 0;

	if (index > 32)
		return (-1);

	buff = n >> index;
	if (buff == 0)
		return (-1);
	if (buff & 1)
		return (1);
	else
		return (0);
}
