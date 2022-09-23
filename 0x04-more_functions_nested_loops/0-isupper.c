#include "main.h"

/**
 * _isupper - checks if a character is upper
 * @c: character to check
 * Return:if true 1, if false 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
