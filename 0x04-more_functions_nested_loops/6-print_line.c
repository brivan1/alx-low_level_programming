#include "main.h"

/**
 * print_line - this function draw a straight line in the terminal
 * @n: inputs the number of times to print _
 * Return: a straight line
 */

void print_line(int n)
{
	int n;
	int sl;

	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (sl = 1; sl <= n; sl++)
		{
			_putchar('_');
		}

		_putchar('\n');
	}
}
