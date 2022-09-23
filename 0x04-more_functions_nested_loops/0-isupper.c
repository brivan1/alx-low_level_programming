#include "main.h"

/**
 * _issuper - function that checks for uppercase character
 *@c: is the int that will use for the argument of the function
 * Return: 1 on success, zero if otherwise
 */
int _isupper(int c)
{
	char c;

	for (c = 'A'; c =< 'Z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n')
}
