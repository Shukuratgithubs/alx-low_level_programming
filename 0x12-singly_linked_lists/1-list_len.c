#include "lists.h"

/**
 * list_len - returns the num of elements in a linked list_t list.
 * @h: pointer to the start of the linked list.
 *
 * Return: num of nodes.
 */
size_t list_len(const list_t *h)
{
	size_t cont = 0;

	while (h)
	{
		cont++;
		h = h->next;
	}

	return (cont);
}
