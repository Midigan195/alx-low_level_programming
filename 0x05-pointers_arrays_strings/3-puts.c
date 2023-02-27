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
	char c2;

	while (c != '\0')
	{
		if (c2 != '\0')
		{
			c2 = *(str + (i + 1));
			c = *(str + i);
			_putchar(c);
		}
		else
			break;
		i++;
	}
	_putchar('\n');
}
