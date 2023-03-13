#include"main.h"
#include<stdlib.h>
/**
 * str_concat - Creates array and fills with specific char
 * @s1: size of array
 * @s2: character
 * Return: pointer to array
*/

char *str_concat(char *s1, char *s2)
{
	char *arr;
	int i = 0;
	int k = 0;
	int size_s1 = 0;
	int size_s2 = 0;

	if (s1 ==  NULL)
		*s1 = '\0';
	if (s2 == NULL)
		*s2 = '\0';

	while (*(s1 + size_s1) != '\0')
		size_s1++;
	size_s1++;
	while (*(s2 + size_s2) != '\0')
		size_s2++;
	size_s2++;

	arr = malloc(sizeof(char) + (size_s2 + size_s1));
	if (arr == NULL)
		return (NULL);

	while (i < (size_s1 - 1))
	{
		arr[i] = *(s1 + i);
		i++;
	}
	while (k < size_s2)
	{
		arr[i] = *(s2 + k);
		k++;
		i++;
	}
	return (arr);

}
