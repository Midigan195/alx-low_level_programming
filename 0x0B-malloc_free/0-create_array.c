#include"main.h"
#include<stdlib.h>
/**
 * create_array - Creates array and fills with specific char
 * @size: size of array
 * @c: character
 * Return: pointer to array
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	int i = 0;
	int s = size;

	if (size == 0)
		return (NULL);

	arr = malloc(size);
	if (arr == NULL)
		return (NULL);

	while (i < s)
	{
		arr[i] = c;
		i++;
	}
	return (arr);

}
