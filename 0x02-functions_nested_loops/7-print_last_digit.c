#include"main.h"

/**
 * print_last_digit - finds last digit
 * @n: integer value
 * Return: last digit of n
*/
int print_last_digit(int n)
{
	int last = n;

	if (n < 0)
		last = (n * -1);

	last = (last % 10);
	_putchar(last + 48);
	return (last);
}
