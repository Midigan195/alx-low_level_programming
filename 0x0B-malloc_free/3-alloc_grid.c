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
	int **arr = malloc(width * sizeof(int *));
	int i = 0;
	int j = 0;

	if (width <= 0 || height <= 0 || arr == NULL)
		return (NULL);

	while (i < height)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			free(arr);
			return (NULL);
		}

		i++;
	}

	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			arr[i][j] = 0;
			j++;
		}
		i++;
	}

	return (arr);

}
