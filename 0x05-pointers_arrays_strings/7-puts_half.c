#include"main.h"
/**
 * puts_half - prints seconfd half of string
 * @str: takes pointer of character
 * Return: nothing
*/

void puts_half(char *str)
{
	int len = 0;
	int n = 0;

	while (*(str + len) != '\0')
	{
		len++;
	}
	len--;

	if (len % 2)
		n = len / 2;
	else
		n = (len - 1) / 2;

	n++;
	while (n < len + 1)
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar('\n');
}

