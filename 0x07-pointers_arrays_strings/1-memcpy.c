#include "main.h"

/**
 * _memory - copies memory area
 * @dest: destination
 * @src: source
 * @n: size to be copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
