#include"main.h"
#include<stdlib.h>
/**
 * malloc_checked - returns exit status if malloc fails
 * @b: number of bytes
 * Return: pointer
*/

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
