#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of the list_t list
 * @h: Listed lists
 * Return: A count
 */
size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		count++;
		h->str ? printf("[%d] %s\n", h->len, h->str) :
			printf("[0] (nil)\n");
		h = h->next;
	}

	return (count);
}
