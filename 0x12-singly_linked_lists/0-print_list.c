#include "lists.h"
#include <stdio.h>
#include <stddef.h>


/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to the list_t list to print
 * Return: nodes numbr printed
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		s++;
		h = h->next;
	}

	return (s);
}
