#include "main.h"

/**
 * _issuper - function that checks for uppercase character
 * Description: uppercase character
 *@c: is the int that will use for the argument of the function
 * Return: 1 on success, zero if otherwise
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
