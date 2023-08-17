#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * free_dlistint - frees list
 * @head: pointer to list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = NULL;
	dlistint_t *temp = NULL;

	if (head != NULL)
	{
		current = head->next;
		while (current != NULL)
		{
			temp = current->next;
			free(current);
			current = temp;
		}
		free(head);
	}
}
