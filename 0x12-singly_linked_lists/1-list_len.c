#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>
#include"lists.h"
/**
 * list_len - Prints a list of items
 * @h: pointer to list
 * Return: number of elements in list
*/

size_t list_len(const list_t *h)
{
	int count = 0;
	list_t *ptr = NULL;

	if (h == NULL)
		return (0);
	ptr = (list_t *)h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
