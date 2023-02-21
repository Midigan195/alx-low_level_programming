#include"main.h"

/**
 * print_alphabet - prints alphabet from a
 *
 * Return: 0 if sucessful
*/
void print_alphabet_x10(void)
{
	int j = 0;

	while (j < 10)
	{
		char i = 'a';

		while (i < ('z' + 1))
		{
			_putchar(i);
			i++;
		}

	_putchar('\n');
	j++;
	}
}
