#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
/**
 * get_nodeint_at_index - Locates a specific node in list
 * @head: contant pointer to list
 * @index: position in list
 * Return: Node located at position
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *curr = NULL;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	curr = head;
	i = 0;
	while (curr != NULL)
	{
		if (i == index)
			return (curr);
		curr = curr->next;
		i++;
	}
	return (NULL);
}
