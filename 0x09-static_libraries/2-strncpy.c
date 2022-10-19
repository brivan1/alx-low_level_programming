#include "main.h"

/**
 * _strncpy- copies a string
 * @dest: buffer to store the string copy
 * @src: the source string
 * @n: max number of bytes copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (src[b])
	{
		b++;
	}
	while (a < n && src[a])
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
