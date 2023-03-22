#include"3-calc.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * main - prints value of operation
 * @argc: number of command line arguments
 * @argv: array of character pointers
 * Return: 0 always sucessful
*/

int main(int argc, char *argv[])
{
	int a;
	char *op;
	int b;
	int (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	op = argv[2];
	b = atoi(argv[3]);

	if ((strcmp(op, "/") || strcmp(op, "%")) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	p = (get_op_func(op));
	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", p(a, b));

	return (0);
}
