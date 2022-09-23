#include "main.h"

/**
 * _isdigit - function checks for a digit from 0 to 9
 * @c: is the int that is used for the argument of the function
 * Return: return 1 on success, 0 when otherwise
 */
int _isdigit(int c)
{
	if ((c >= 47) && (c <= 56))
		return (1);
	else
		return (0);
}
