#include"main.h"
/**
 * print_lines - Prints line of a certain size
 * @n: number of lines
 * Return: 0 always sucessful
*/

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
