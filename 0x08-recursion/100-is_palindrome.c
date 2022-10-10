#include "main.h"
#include <stdio.h>
#include <string.h>

int check_palindrome(char *s);

/**
 * is_palindrome - returns a palindrome string
 * @s: the string to be checked
 *
 * Return: integer value
 */
int is_palindrome(char *s);
{
	if (*s == '0')
		return (1);
	return (check_palindrome(s));
}
