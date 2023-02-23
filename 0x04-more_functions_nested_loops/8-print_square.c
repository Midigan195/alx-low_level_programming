#include"main.h"
/**
 * print_square - Prints square
 * @size: number of hases
 * Return: 0 always sucessful
*/

void print_square(int size)
{
	int i = 0;
	int j = 0;

	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
