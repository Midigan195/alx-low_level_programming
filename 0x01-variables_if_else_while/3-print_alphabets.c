#include<stdio.h>

/**
 * main - run program
 *
 * i: initialise a
 * j: initialise A
 *
 * Return: 0 if sucesfful
*/
int main(void)
{
	char i = 'a';
	char j = 'A';

	while (i < ('z' + 1))
	{
		putchar(i);
		i++;
	}

	while (j < ('Z' + 1))
	{
		putchar(j);
		j++;
	}

	putchar('\n');
	return (0);
}
