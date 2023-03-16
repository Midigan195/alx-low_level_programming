#include"main.h"
#include<stdlib.h>
/**
 * array_range - returns exit status if malloc fails
 * @min : number of elements
 * @max: number of bytes
 * Return: pointer
*/

int *array_range(int min, int max)
{
	int *p;
	int space = (max - min) + 1;
	int i = 0;

	if (min > max)
		return (NULL);
	p = malloc(space * sizeof(int));
	if (p == NULL)
		return (NULL);
	while (i < space)
	{
		p[i] = min + i;
		i++;
	}
	return (p);
}
