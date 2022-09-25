#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints numbers from 1 to 100
 * multiples of 3 is to print fizz
 * multiples of 5 is to print buzz
 * multiples of 3 and 5 is to print fizzbuzz
 * Return: 0
 */

int main(void)
{
	int n;

	char three = "fizz";

	char five = "buzz";

	char thrive = "fizzbuzz";

	for (n = 1; n <= 100; n++)

	{
		if (n == 100)
		{
			_putchar(n + '0');
		}

		else if (n % 3 == 0)
		{
			_putchar(three);
		}

		else if (n % 5 == 0)
		{
			_putchar(five);
		}

		else if ((n % 3 == 0) && (n % 5 == 0))
		{
			_putchar(thrive);
		}

		else
		{
			_putchar(n + '0');
		}
		_putchar('\n');

	}
	return (0);
}
