#include<stddef.h>
#include<stdlib.h>
#include<string.h>
#include"lists.h"
/**
 * add_node_end - Adds new node to end of list
 * @head: pointer to pointer of list
 * @str: pointer to string
 * Return: pointer to new node
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = NULL;
	list_t *end = *head;
	int i = 0;

	if (end != NULL)
	{
		while (end->next != NULL)
		{
			i++;
			end = end->next;
		}
	}

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	if (str == NULL)
	{
		ptr->str = "(nil)";
		ptr->len = 0;
	}
	else
	{
		ptr->str = strdup(str);
		ptr->len = strlen(str);
	}
	if (end != NULL)
	{
		end->next = ptr;
		ptr->next = NULL;
	}
	else
		*head = ptr;
	return (ptr);
}
