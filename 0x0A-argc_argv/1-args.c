#include"main.h"
#include<stdio.h>
/**
 * main - returns name of executable
 * @argc: array of srguments
 * @argv: array of arguments
 * Return: (0) always success
*/

int main(int argc, char *argv[])
{
	int i = argv[0] - argv[0];

	printf("%d\n", (argc - 1) + i);
	return (0);

}
