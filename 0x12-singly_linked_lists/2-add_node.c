#include<stddef.h>
#include<stdlib.h>
#include<string.h>
#include"lists.h"
/**
 * add_node - Adds new node to start of list
 * @head: pointer to pointer of list
 * @str: pointer to string
 * Return: pointer to new node
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = NULL;
	list_t *temp = NULL;

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
	temp = *head;
	*head = ptr;
	ptr->next = temp;

	return (ptr);
}
