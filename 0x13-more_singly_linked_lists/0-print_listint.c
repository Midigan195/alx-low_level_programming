#include<stdio.h>
#include"lists.h"
/**
 * print_listint - prints each elemnt of a list
 * @h: contant pointer to list
 * Return: number of elements in list h
*/

size_t print_listint(const listint_t *h)
{
	const listint_t *cur = h;
	int i = 0;

	while (cur != NULL)
	{
		i++;
		printf("%d\n",cur->n);
		cur = cur->next;
	}
	return (i);
}
