#include "lists.h"

/**
 * free_listint- free a listint_t list
 * @head: a pointer to the head of the list
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
