#include"main.h"
#include<stdio.h>

/**
 * _print_to_98 - checks wether value is lowercase
 * @n: input parameter
 * Return: 0 if sucessful
*/
void print_to_98(int n)
{
	int i = n;

	if (n > 98)
	{
		while (i > 98)
		{
			printf("%d, ", i);
			i--;
		}
	}
	else if (n < 98)
	{
		while (i < 98)
		{
			printf("%d, ", i);
			i++;
		}
	}
	printf("98\n");
}
