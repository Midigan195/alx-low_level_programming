#include"main.h"
#include<stdlib.h>
/**
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	int i = 0;
	int s = size;

	if (size == 0)
		return (NULL);
	arr = malloc(size);

	while (i < s)
	{
		arr[i] = c;
		i++;
	}
	return (arr);

}
