#include "main.h"

/**
 * print_triangle - this function prints triangle, followe by a new line
 * @size: the size of triangle 
 * Return: a triangle of #
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
			for (sl = 0; sl <= (size -1) - dl; sl++)
			{
				_putchar(' ');
			}

			for (vl = 0; vl <= sl; vl++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}	
	}
}
