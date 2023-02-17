#include<stdio.h>

/**
*
*
*
*
*/
int main(void)
{
	char i = 'z';

	while (i > ('a'-1))
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
