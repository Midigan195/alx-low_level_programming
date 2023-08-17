#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - delete item at specified index of list
 * @head: pointerd to pointer of list
 * @index: position where to delete from list
 * Return: 1 if sucessful; else return 1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *last_node = NULL;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);
	last_node = *head;
	if (last_node == NULL)
		return (-1);
	else if (index == 0)
	{
		*head = (*head)->next;
		free((*head)->prev);
		(*head)->prev = NULL;
		return (1);
	}
	else
	{
		while (last_node->next != NULL)
		{
			if (i == index)
			{
				last_node->next->prev = last_node->prev;
				last_node->prev->next = last_node->next;
				free(last_node);
				return (1);
			}
			last_node = last_node->next;
			i++;
		}
		if (last_node->next == NULL && i == index)
		{
			last_node->prev->next = NULL;
			free(last_node);
		}
	}
	return (-1);
}
