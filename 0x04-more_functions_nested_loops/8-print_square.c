#include "main.h"

/**
 * print_square - this function prints a square, with a new line
 * @size: size of square is measured by length and width
 * Return: a square print of #
 */

void print_square(int size)
{
	int len;

	int wid;

	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (len = 1; len <= size; len++)
		{
			_putchar('#');
			for (wid = 2; wid <= size; wid++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
