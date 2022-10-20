#include "main.h"

/**
 * _islower- checks for lowercase
 * description:is lower
 * @c: letter
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
