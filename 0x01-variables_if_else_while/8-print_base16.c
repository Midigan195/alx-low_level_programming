#include<stdio.h>

/**
*
*
*
*
*/
int main(void)
{
	char i = 48;
	char j = 'a';

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	while (j < 'g')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
