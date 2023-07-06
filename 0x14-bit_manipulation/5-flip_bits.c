#include "main.h"
#include <stdio.h>
/**
 * flip_bits - Counts number of bits to be flipped
 * @n: integer to compare
 * @m: integer to be compared against
 * Return: number of flipped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int invert = 0;
	unsigned long int buff = 0;
	int i = 31;
	unsigned int count = 0;

	invert = n ^ m;
	while (i >= 0)
	{
		buff = invert >> i;
		if (buff & 1)
			count++;
		i--;
	}

	return (count);
}
