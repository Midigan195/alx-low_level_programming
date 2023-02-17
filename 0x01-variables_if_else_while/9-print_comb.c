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
	
	while (i < 58)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(' ');
			putchar(',');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
