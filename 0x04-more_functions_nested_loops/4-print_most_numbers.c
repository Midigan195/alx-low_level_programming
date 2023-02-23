#include"main.h"
/**
 * print_numbers - Checks if letter is uppercase
 * Return: 0 always sucessful
*/

void print_most_numbers(void)
{
	int i = 48;

	while (i <= 57)
	{
		if (i != 50 && i != 52)
			_putchar(i);
		i++;
	}
	_putchar('\n');
}
