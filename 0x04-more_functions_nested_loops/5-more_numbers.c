#include "main.h"

/**
 * more_numbers - prints numbers 0 to 14 ten times
 * Return: 0
 */

void more_numbers(void)
{
	int i;
	int n;

	for (n = 1; n <= 10; n++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
			_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
