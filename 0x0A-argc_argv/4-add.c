#include"main.h"
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
/**
 * main - returns name of executable
 * @argv: array of srgumentsi
 * @argc: number of argumets
 * Return: (0) always success
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 1;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}
	else
	{
		while (i < (argc))
		{
			if (!((*argv[i] >= '0') && (*argv[i] <= '9')))
			{
				printf("Error\n");
				return (1);
			}
			sum = sum + atoi(argv[i]);
			i++;
		}
		printf("%d\n", sum);
	}
	return (0);
}
