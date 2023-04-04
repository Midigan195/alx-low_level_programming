#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
/**
 * pop_listint - deletes first element
 * @head: contant pointer to list
 * Return: Value of first element;
*/
int pop_listint(listint_t **head)
{
	listint_t *temp = NULL;
	int n;

	if (*head == NULL || head == NULL)
		return (0);
	n = (*head)->n;
	temp = (*head);
	(*head) = (*head)->next;
	free(temp);

	return (n);



}
