#include "main.h"

/**
 * _realloc- reallocates a mem block using malloc and free
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *clone, *rellos;

	unsigned int i;

	if (ptr != NULL)
		clone = ptr;
	else
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return(0);
	}
	rellos = malloc(new_size);
	if (rellos == NULL)
		return (0);
	for (i = 0; i < (old_size || i < new_size); i++)
	{
		*(rellos + i) = clone[i];
	}
	free(ptr);
	return (rellos);
}
