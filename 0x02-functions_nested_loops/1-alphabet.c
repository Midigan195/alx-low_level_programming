#include"main.h"

/**
 * print_alphabet - prints alphabet from a
 *
 * Return: 0 if sucessful
*/
void print_alphabet(void)
{
	char i = 'a';

	while (i < ('z' + 1))
	{
		_putchar(i);
		i++;
	}

	_putchar('\n');
}
