#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - returns node at specified index
 * @head: pointer to list head
 * @index: index of list
 * Return: value at specified element
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t count = 0;
	dlistint_t *current = head;

	if (head == NULL)
		return (NULL);

	while (current != NULL)
	{
		if (count == index)
			return (current);
		current = current->next;
		count++;
	}
	return (NULL);
}
