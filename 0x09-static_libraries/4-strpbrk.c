#include "main.h"

/**
 * _strpbrk- searches a string for any of a set of bytes.
 * @s: string
 * @accept: substring
 * Return: s if found, 0 if not found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
