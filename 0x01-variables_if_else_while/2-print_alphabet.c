#include<stdio.h>

/**
 * main - runs program
 *
 * Return: 0 if sucessful
*/
int main(void)
{
	char i = 'a';

	while (i < ('z'+1))
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
