#include"main.h"
#include<stdlib.h>
/**
 * _strdup - Creates array and fills with specific char
 * @str: character
 * Return: pointer to array
*/

char *_strdup(char *str)
{
	char *arr;
	int i = 0;
	int j = 0;

	if (str == NULL)
		return (NULL);

	while (*(str + i) != '\n')
		i++;
	i++;

	arr = malloc(sizeof(char) * i);
	if (arr == NULL)
		return (NULL);

	while (j < i)
	{
		arr[j] = *(str + j);
		j++;
	}

	return (arr);

}
