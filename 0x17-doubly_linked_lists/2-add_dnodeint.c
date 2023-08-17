#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * add_dnodeint - add item to the begining of list
 * @head: pointer to pointer of list
 * @n: value of element to add to list
 * Return: pointer to new node if sucessful; else return NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		new_node->next = *head;
		(*head)->prev = new_node;
		*head = new_node;
	}
	return (new_node);
}
