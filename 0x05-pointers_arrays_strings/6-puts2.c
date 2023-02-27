#include"main.h"
/**
 * puts2 - prints seconfd half of string
 * @str: takes pointer of character
 * Return: nothing
*/

void puts2(char *str)
{
	int i = 0;
	int len = 0;

	while (*(str + len) != '\0')
	{
		len++;
	}
	len--;

	while (i < len)
	{
		if ((i % 2) == 0)
		{
			_putchar(*(str + i));
		}
		i++;
	}
	_putchar('\n');
}

