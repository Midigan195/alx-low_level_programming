#include"main.h"
/**
 * _puts - prints string
 * @str: takes pointer of character
 * Return: nothing
*/

void _puts(char *str)
{
	int i = 0;
	char c;

	while (c != '\0')
	{
		c = *(str + i);
		_putchar(c);
		i++;
	}
	_putchar('\n');
}
