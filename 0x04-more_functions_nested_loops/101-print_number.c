#include "main.h"

/**
 * print_number - function prints integers
 * @n: integers to be printed
 * Return: 0
 */

void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		_putchar(45);
		x = -n;
	}

	if (x / 10)
		print_number(x / 10);
	_putchar((x % 10) + '0');
}
