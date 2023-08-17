#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * add_dnodeint_end - add item to the end of list
 * @head: pointer to pointer of list
 * @n: value of element to add to list
 * Return: pointer to new node if sucessful; else return NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *last_node = NULL;

	if (head == NULL)
		return (NULL);
	last_node = *head;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (last_node == NULL)
		*head = new_node;
	else
	{
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		new_node->prev = last_node;
		last_node->next = new_node;
	}
	return (new_node);
}
