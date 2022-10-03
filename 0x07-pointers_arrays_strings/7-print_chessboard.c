#include "main.h"

/**
 * print_chessboard - prints chessboard
 * @a:dimension of chessboard
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int m, n;

	m = 0;
	while (a[m][7])
	{
		n = 0;
		while (n < 8)
		{
			_putchar(a[m][n]);
			n++;
		}
		_putchar('\n');
		m++;
	}
}
