#include <stdio.h>

/**
 * main - prints prime factors
 * Return: 0
 */

int main(void)
{
	long n = 612852475143;

	int p;

	while (p++ < n / 2)
	{
		if (n % p == 0)
		{
			n / = 2;
			continue;
		}
		for (p = 3; p < n / 2; p += 2)
		{
			if (n % p == 0)
			{
				n /= p;
			}
		}
	}
	printf("%d\n", n);
	return (0);
}
