#include"main.h"
#include<stdio.h>
/**
 * main - returns name of executable
 * @argv: array of srguments
 * Return: (0) always success
*/

int main (int argc, char *argv[])
{
	printf("%s\n", argv[(argc - argc)]);
	return (0);
}
