#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
/**
 * delete_nodeint_at_index - Delete node in a specific location in list
 * @head: contant pointer to list
 * @index: position in list
 * Return: 1 if sucessful ; 2 if unsucessful
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *position = NULL;
	listint_t *temp = NULL;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	position = *head;
	i = 0;

	if (index != 0)
	{
		while (position != NULL)
		{
			i++;
			if (i == index)
				break;
			position = position->next;
		}
		if (index > i)
			return (-1);
		temp = position->next;
		position->next = position->next->next;
		free(temp);
	}
	else
	{
		temp = (*head);
		(*head) = temp->next;
		free(temp);
	}
	return (1);
}
