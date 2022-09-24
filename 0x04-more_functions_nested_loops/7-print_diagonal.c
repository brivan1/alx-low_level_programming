#include "main.h"

/**
 * print_diagonal - a function to draw a diagonal line on the terminal
 * @n: inputs the number of times to print \
 * Return: a diagonal line
 */

void print_diagonal(int n)
{
	int sl;
       	int dl;

	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{

		for (sl = 1; sl <= n; sl++)
		{

			for (dl = 1; dl < sl; dl++)
			{
				_putchar(' ');
			}

			_putchar('\\');
			_putchar('\n');
		}
	}
}
