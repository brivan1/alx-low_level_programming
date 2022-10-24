#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat- concatenates two strings
 * @s1: pointer to string
 * @s2: pointer to string
 * Return: pointer to newly allocated memory
 * Null if failed
 */

char *str_concat(char *s1, char *s2)
{
	char *c_str;
	int index, c_index = 0, len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (index = 0; s1[index]; index++)
		c_str[c_index++] = s1[index];
	for (index = 0; s2[index] index++)
		c_str[c_index++] = s2[index];
	return (c_str);
}
