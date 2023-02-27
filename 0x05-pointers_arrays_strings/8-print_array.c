#include"main.h"
/**
 * _print_array - prints string
 * @a: takes array pointer
 * @b: takes array length
 * Return: nothing
*/

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar(*(a + i));
		i++;
	}
	_putchar('\n');
}
