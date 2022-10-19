#include "main.h"

/**
 * _strncat- concatenates two strings
 * @dest: string to be appended upon
 * @src: string to be completed at the end of the dest
 * @n: the no. of characters to be appended
 * Return: new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int length;

	int i;

	length = 0;
	i = 0;

	while(dest[length])
	{
		length++;
	}
	while (i < n && src[i])
	{
		dest[length] = src[i];
		length++;
		i++;
	}
	dest[length + n + 1] = '\0';
	return (dest);
}
