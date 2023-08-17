#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_dlistint - prints doubly linked list to terminal
 * @h: pointer to list head
 * Return: number of elements printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		printf("%i\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
