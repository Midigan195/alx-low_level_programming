#include"main.h"
#include<stdio.h>
/**
 * main - returns name of executable
 * @argv: array of srguments
 * Return: (0) always success
*/

int main (int argc, char *argv[])
{
	int i = 0;
	
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
