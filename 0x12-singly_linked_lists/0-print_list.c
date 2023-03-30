#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>
#include"lists.h"
/**
 * print_list - Prints a list of items
 * @h: pointer to list
 * Return: number of elements in list
*/

size_t print_list(const list_t *h)
{
	int count = 0;
	list_t *ptr = NULL;
	if (h == NULL)
		exit(0);
	ptr = (list_t *)h;

	while (ptr != NULL)
	{
		count++;
		if (ptr->str != NULL)
			printf("[%d] %s\n", ptr->len, ptr->str);
		else
			printf("[0] (nil)\n");
		ptr = ptr->next;
	}

	return (count);
}
