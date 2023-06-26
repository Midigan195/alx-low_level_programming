#include"main.h"
#include<stdlib.h>
/**
 * _calloc - returns exit status if malloc fails
 * @nmemb : number of elements
 * @size: number of bytes
 * Return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p = NULL;
	char *buff = NULL;
	int i = 0;
	int space = nmemb * size;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	buff = malloc(space);
	if (buff == NULL)
	{
		free(p);
		return (NULL);
	}

	while (i < (space))
	{
		*(buff + i) = 0;
		i++;
	}
	p = buff;
	return (p);
}
