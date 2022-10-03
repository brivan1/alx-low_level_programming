#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a sq matrix
 * @sq matrix
 * @size: size of diagonals
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, k, sum1 = 0, sum2 = 0;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < 5)
		{
			sum1 += a[i][j];
			j++;
		}
		k = size;
		while (k >= 0)
		{
			sum2 += a[i][k];
			k--;
		}
		printf("%d, %d", sum1, sum2);
	}
}
