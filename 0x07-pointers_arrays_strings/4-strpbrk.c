#include "main.h"

/**
 * _strpbrk - gets a string of any set of bytes
 * @s: string
 * @accept: comparison string
 * Return: pointer to byte where a match is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

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
