#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
/**
 * insert_nodeint_at_index -Inserts node in a specific location in list
 * @head: contant pointer to list
 * @idx: position in list
 * @n: value of new node
 * Return: pointer to new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *position = NULL;
	listint_t *new_node = NULL;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	position = *head;
	i = 0;

	if (idx != 0)
	{
		while (position != NULL)
		{
			i++;
			if (i == idx)
				break;
			position = position->next;
		}
		if (i > idx)
			return (NULL);
		new_node->next = position->next;
		position->next = new_node;
	}
	else
	{
		new_node->next = (*head);
		(*head) = new_node;
	}
	return (new_node);
}
