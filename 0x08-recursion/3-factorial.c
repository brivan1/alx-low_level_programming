#include "main.h"

/**
 * factorial - finds the factorial of a number
 * @n: is the number that computes the factorial
 *
 * Return: integer value
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
