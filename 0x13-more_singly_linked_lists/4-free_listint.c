#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
/**
 * free_listint - frees list
 * @head: contant pointer to list
*/

void free_listint(listint_t *head)
{
	listint_t *temp = NULL;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}