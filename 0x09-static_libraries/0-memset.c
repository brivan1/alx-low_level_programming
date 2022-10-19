#include "main.h"

/**
 * _memset- fills the memory block with a  constant byte
 * @n: number of bytes to be used
 * @b: char to be used
 * @s: address to memory block
 * Return: pointer to the memory block
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1];
		n--;
	}
	return (s);
}
