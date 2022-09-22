#include "main.h"
/**
 * _strcpy - C function tat copies a string, including the
 * terminating null byte, using atmost an inputted number of bytes.
 * if the length of the source string is less than the maximum byte number,
 * the remainder of the destination string is filled with null bytes
 * works identically to the standard library function 'strcpy'
 * @dest: buffer storing the string copy
 * @src: the source string
 * @n: max number of the byte copied
 */

char *_strcpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
