#include "main.h"
#include <stdio.h>

/**
 * _strdup- returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: the pointer to string being duplicated
 * Return: NULL if str is null
 * a pointer to the duplicated string
 * or null if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *dstr;

	unsigned int len, j;

	if (str == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	dstr = malloc(sizeof(char) * (len + 1));

	if (dstr == NULL)
	{
		return (NULL);
	}
	for  (j = 0; j < len; j++)
	{
		dstr[j] = str[j];
	}
	dstr[len] = '\0';
	return (dstr);
}
