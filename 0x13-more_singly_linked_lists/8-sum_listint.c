#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
/**
 * sum_listint - Calculates the sum of all elements in list
 * @head: contant pointer to list
 * Return: Sum of all elements of list head
*/

int sum_listint(listint_t *head)
{
	listint_t *curr = NULL;
	int sum = 0;

	if (head == NULL)
		return (0);
	curr = head;
	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
