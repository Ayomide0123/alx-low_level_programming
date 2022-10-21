#include "lists.h"

/**
 * list_len - returns the no. of elements in the list_t list
 * @h: Listed lists
 * Return: A count
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
