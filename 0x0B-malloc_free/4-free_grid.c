#include"main.h"
#include<stdlib.h>
/**
 * free_grid - Creates array and fills with specific char
 * @grid: size of array
 * @height: character
*/

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
