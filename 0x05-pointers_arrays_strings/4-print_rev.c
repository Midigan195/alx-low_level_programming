#include"main.h"
/**
 * _print_rev - prints string
 * @s: takes pointer of character
 * Return: nothing
*/

void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	while (!(i < 1))
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
