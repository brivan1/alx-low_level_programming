#include "main.h"

/**
 * print_triangle - this function prints triangle, followed by a new line
 * @size: size of triangle, when less than or zero print a new line
 * Return: a triangle of '#'s
 */

void print_triangle(int size)
{
	int i = 1, ii;

	while(i <= size && size > 0)
	{
		ii = 0;

		while (ii < size - i)
		{
			_putchar('');
			ii++;
		}

		ii = 0;
		while(ii < i)
		{
			_putchar('#');
			ii++;
		}

		_putchar('\n');
		i++;
	}
	if (i == 1)
		_putchar('\n');
}	
