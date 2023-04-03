#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
/**
 * add_nodeint - adds new node to list;
 * @head: contant pointer to list
 * @n: integer to add to list;
 * Return: pointer to new element
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL || head == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
