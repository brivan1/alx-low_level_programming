#include "main.h"

/**
 * print_triangle - this function prints triangle, followed by a new line
 * @size: size of triangle, when less than or zero print a new line
 * Return: a triangle of '#'s
 */

void print_triangle(int size)
{
	int dl;

	int vl;

	int sl;

	if (size <= 0)

	{
		_putchar('\n');
	}

	else
	{
		for (dl = 0; dl <= (size - 1); dl++)

		{

			for (sl = 0; sl <= (size - 1) - dl; sl++)
			{
				_putchar('-');
			}

			for (vl = 0; vl <= sl; vl++)
			{
				_putchar('#');
			}

			_putchar('\\');
			_putchar('\n');
		}
	}
}
