#include "lists.h"

/**
 * get_nodeint_att_index- returns the nth node of a listint_t linked list.
 * @head: a pointer to the head of the list
 * @index: the index of the node to locate
 * Return: if the node doesn't exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
	}
	return (head);
}
