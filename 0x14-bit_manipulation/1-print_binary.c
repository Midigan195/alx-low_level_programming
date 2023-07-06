#include "main.h"
/**
 * print_binary - Converts decimal integer to binary
 * @n: unsigned integer to be converted
 */
void print_binary(unsigned long int n)
{
	int i = 31;
	unsigned long int buff = 0;

	if (n == 0)
		_putchar('0');
	else
	{
		while (i >= 0)
		{
			buff = n >> i;
			if (buff != 0)
			{
				if (buff & 1)
					_putchar('1');
				else
					_putchar('0');
			}
			i--;
		}
	}
}
