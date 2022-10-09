#include "main.h"

/**
 * _strspn - Gets length of a prefix substring
 * @s: string source
 * @accept: accepted string
 * Return: int val of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0, b, t = 0;

	while (accept[x])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (accepted[x] == s[b])
			{
				t++;
			}

			b++;

			}
		}

		x++;
	}
	return (t);
}
