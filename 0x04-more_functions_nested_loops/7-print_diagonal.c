#include"main.h"
/**
 * print_diagonal - Prints line of a certain size
 * @n: number of lines
 * Return: 0 always sucessful
*/

void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	if (!(n <= 0))
	{
		while (i < n)
		{
			j = 0;
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');

}
