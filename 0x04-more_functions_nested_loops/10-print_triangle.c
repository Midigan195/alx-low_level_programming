#include"main.h"
/**
 * print_triangle - Prints line of a certain size
 * @size: number of lines
 * Return: 0 always sucessful
*/

void print_triangle(int size)
{
	int i = 0;
	int j = 0;
	int k = 0;

	if (!(size <= 0))
	{
		while (i < size)
		{
			j = size - (i + 1);
			k = 0;
			while (j > 0)
			{
				_putchar(' ');
				j--;
			}
			while (k < i + 1)
			{
				_putchar('#');
				k++;
			}

			i++;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');

}
