#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: a pointer to the head of listint_t list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h);
{
	size_t nodes;

	nodes = 0;
	while (h != NULL)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
