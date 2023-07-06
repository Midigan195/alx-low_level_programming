#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - Converts a binary number to unsigned int
 * @b: pointer to string of chars
 * Return: Converted number if sucess; 0 if failed
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	int count = 0;
	unsigned int converted = 0;

	if (b == NULL)
		return (0);
	while (b[count] != '\0')
	{
		if (b[count] != '0' && b[count] != '1')
			return (0);
		count++;
	}

	while (count >= 0)
	{
		if (b[count] == '1')
		{
			converted += 2 << (i - 1);
		}
		count--;
		i++;
	}

	return (converted >> 1);
}
