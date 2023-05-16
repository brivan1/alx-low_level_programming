#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to hash table, otherwise return NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hstb;
	unsigned long int index;

	if (size < 1)
		return (NULL);

	hstb = malloc(sizeof(hash_table_t));
	if (hstb == NULL)
		return (NULL);
	hstb->array = malloc(sizeof(hash_node_t *) * size);
	if (hstb->array == NULL)
	{
		free(hstb);
		return (NULL);
	}

	hstb->size = size;

	for (index = 0; index < size; index++)
		hstb->array[index] = NULL;
	return (hstb);
}

