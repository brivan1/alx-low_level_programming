#include <stdio.h>

/**
 * main - prints all possible combinations of single digits numbers
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
		if (num < 9)
		{
			putchar(',');
			putchar('0');
		}
	}

	putchar('\n');

	return (0);
}
