#include "main.h"

/**
 * _strspn- gets the legth of a prefix substring
 * @s: string
 * @accept: substring
 * Return: number of bytes of s in accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (!accept[j])
		{
			break;
		}
	}
	return (i);
}
