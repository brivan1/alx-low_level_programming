#include "lists.h"

/**
 * insert_nodeint_at_index- inserts new node at a give position
 * @head: A pointer to the address of the head of the list
 * @idx: the index of the list to which the node should
 * be inserted
 * @n: the integer for the new ode to contain
 * @Return: the address of te ew node, or NULL if it has failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *copy = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->next = copy;
		*head = new;
		return (new);
	}
	for (node = 0; node < (idx - 1); node++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);
		copy = copy->next;
	}
	new->next = copy->next;
	copy->next = new;

	return (new);
}
