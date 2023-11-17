#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a new node at the end
 * of a list_t list.
 * @head: A pointer the head of the list_t list
 * @str: The string to be added to the list_t list
 * Return: If the function fails - NULL
 * Otherwise - the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *temp = *head;
	list_t *new;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	
	while (temp->next)
		temp = temp->next;
	
	temp->next = new;

	return (new);;
}
