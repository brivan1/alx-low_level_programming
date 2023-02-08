#include "lists.h"

/**
 * pop_listint- deletes the head node of a listint_t linked list.
 * @head: a pointer to the address of the head of list.
 * Return: head node's data (n).
 * if the linked list is empty return 0.
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int hnode;

	if (head == NULL)
		return (0);
	tmp = *head;
	hnode = (*head)->n;
	*head = (*head)->next;
	free(tmp);
	return (hnode);
}
