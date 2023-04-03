#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
/**
 * add_nodeint_end - adds new node to end of list;
 * @head: contant pointer to list
 * @n: integer to add to list;
 * Return: pointer to new element
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last = NULL;
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL || head == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;

		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}
	return (new);
}
