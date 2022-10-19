#include "main.h"

/**
 * _isdigit- checks is a character is a digit
 * @c: character to be identified
 *
 * Return: zero if false, one if true
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
