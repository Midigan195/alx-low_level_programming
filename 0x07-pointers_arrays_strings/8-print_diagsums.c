#include"main.h"
#include<stdio.h>
/**
 * print_diagsums - fill area in memory
 * @a: pointer
 * @size: size of matrix
 * Return: nothing
*/

void print_diagsums(int *a, int size)
{
	int i = 0;
	int k = 0;
	int m = 0;
	int sum1 = 0;
	int sum2 = 0;
	int arr[100][100];

	while (k < size)
	{
		m = 0;
		while (m < size)
		{
			arr[k][m] = *(a + i);
			m++;
			i++;
		}
		k++;
	}
	i = 0;
	k = 0;
	while (k < size)
	{
		sum1 = sum1 + arr[k][k];
		k++;
	}
	k--;
	while (k >= 0)
	{
		sum2 = sum2 + arr[i][k];
		i++;
		k--;
	}

	printf("%d, %d", sum1, sum2);
	printf("\n");
}

