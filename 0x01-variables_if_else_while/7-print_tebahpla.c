#include<stdio.h>

/**
 * main - runs program
 *
 * i: initialise z
 *
 * Return: 0 if sucessful
*/
int main(void)
{
	char i = 'z';

	while (i > ('a' - 1))
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
