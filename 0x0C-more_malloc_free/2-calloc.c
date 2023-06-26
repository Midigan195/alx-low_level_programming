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
	void *p;
	int i = 0;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	
	while (i < (nmemb * size))
	{
		*(char*)(p + i) = 0;
		i++;
	}
	return (p);
}
