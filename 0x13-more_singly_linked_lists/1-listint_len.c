#include<stdio.h>
#include"lists.h"
/**
 * listint_len - Counts number of elements in list
 * @h: contant pointer to list
 * Return: number of elements in list h
*/

size_t listint_len(const listint_t *h)
{
	const listint_t *cur = h;
	int i = 0;

	while (cur != NULL)
	{
		i++;
		cur = cur->next;
	}
	return (i);
}
