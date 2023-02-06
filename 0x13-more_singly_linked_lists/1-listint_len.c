#include "lists.h"

/**
 * listint_len- returnsthe number of elements in a linked listinint_t list
 * @h: a pointer to the head of the linked listint_t list
 * Return: no. of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
