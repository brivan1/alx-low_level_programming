#include "main.h"

/**
 * @s: pointer to a string
 * @c:character
 * Return: pointer to address of c
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}

	return (0);
}
