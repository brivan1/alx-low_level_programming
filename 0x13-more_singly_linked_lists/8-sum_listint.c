#include "lists.h"

/**
 * sum_listint- reutrns the sum of all data (n) of a listint_t linked list.
 * @head: pointer to the head of the list
 * Return: if the list is empty, return 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
