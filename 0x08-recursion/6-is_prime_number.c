#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - returns a prime number
 * @n: is the number to be identified
 *
 * Return: integer value
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - check if a number is prime
 * @n: number to be identified
 * @i: the iteration times
 *
 * Return: 1 if prime, 0 if composite
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (1);

	if ((n / i) < i)
		return (1);

	return (check_prime(n, i + 1));
}
