#include <stdio.h>

/**
 * main - prints combinations of three digits
 * Return: 0
 */
int main(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			for (c = b + 1; c < 10; c++)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');
				if (!((a == 7) && (b == 8) && (c == 9)))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	
	putchar('\n');

	return (0);
}

