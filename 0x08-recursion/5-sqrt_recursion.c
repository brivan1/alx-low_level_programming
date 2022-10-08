#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to compute the natural square root
 *
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - computes natural square root
 * @n: the number that computes the square root
 * @i: iterate number
 *
 * Return: the natural square root
 */
int _sqrt(int n, int i)
{
	int _sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (sqrt(n, i + 1));
}
