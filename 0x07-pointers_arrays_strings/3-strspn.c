#include "main.h"

/**
 * _strspn - Gets length of a prefix substring
 * @s: string
 * @accept: substring
 * Return: int val of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i]; i++)
		{
			if (accepted[i] == *s)
			{
				x++;
				break;
			}
			else if ((accept[i + 1]) == '\0')
			{
				return (x);
			}
		}
		s++;
	}
	return (x);
}
