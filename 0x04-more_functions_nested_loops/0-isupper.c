#include "main.h"
#include <stdio.h>

/**
 * _issuper - function that checks for uppercase character
 * Description: uppercase character
 *@c: is the int that will use for the argument of the function
 * Return: 1 on success, zero if otherwise
 */
int _isupper(int c)
{
	char c;

	for (c >= 'A'; c <= 'Z'; c++)
	{
		putchar (c);
	}

	putchar('\n');

	return (1);
}

		
