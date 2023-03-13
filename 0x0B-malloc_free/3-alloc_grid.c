#include"main.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * alloc_grid - Creates array and fills with specific char
 * @width: size of array
 * @height: character
 * Return: pointer to array
*/

int **alloc_grid(int width, int height)
{
	int **arr = (int**)malloc(width * sizeof(int*));
	int i = 0;
	int j = 0;

	while (i < height)
	{
		arr[i] = (int*)malloc(width * sizeof(int));
		i++;
	}

	while (i < height)
	{
		j = 0;
		while(j < width)
		{
			arr[i][j] = 0;
			j++;
		}
		i++;
	}

	return (arr);

}
