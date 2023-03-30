#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>
#include"lists.h"
/**
 * free_list - free a list of items
 * @head: pointer to list
*/

void free_list(list_t *head)
{
	list_t *temp = NULL;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
		free(temp->str);
	}
}
