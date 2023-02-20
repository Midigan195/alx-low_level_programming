#include<stdio.h>

/**
 * main - run program
 *
 * i: initialise a
 *
 * Return: 0 if sucessful
*/
int main(void)
{
	char i = 'a';

	while (i < ('z' + 1))
	{
		if (!(i == 'q' || i == 'e'))
		{
			putchar(i);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
