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
	char *p;
	int space = nmemb * size;
	int i = 0;
	int el = nmemb;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	p = malloc(space);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	while (i < el)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
