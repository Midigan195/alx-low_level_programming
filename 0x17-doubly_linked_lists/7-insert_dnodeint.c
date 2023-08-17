#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - add item to specified index of list
 * @h: pointer to pointer of list
 * @idx: position where to add list
 * @n: value of element to add to list
 * Return: pointer to new node if sucessful; else return NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *last_node = NULL;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	last_node = *h;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (last_node == NULL)
	{
		return (NULL);
	}
	else if (idx == 0)
	{
		new_node->next = *h;
		(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	else
	{
		while (last_node != NULL)
		{
			if (i == idx)
			{
				new_node->next = last_node;
				new_node->prev = last_node->prev;
				last_node->prev->next = new_node;
				last_node->prev = new_node;
				return (new_node);
			}
			else if (last_node->next == NULL && i == idx - 1)
			{
				new_node->prev = last_node;
	                        last_node->next = new_node;
				return (new_node);
			}
			last_node = last_node->next;
			i++;
		}
	}
	return (NULL);
}
