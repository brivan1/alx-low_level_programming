#include <stdio.h>

/**
 * main -prints the alphabet
 * Return: 0
 */
int main(void)
{
	char U;
	char l;

	for(l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}

	for (U = 'A'; U <= 'Z'; U++)
	{
		putchar(U);
	}

	putchar('\n');

	return (0);
}

