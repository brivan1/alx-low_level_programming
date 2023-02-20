#include <stdarg.h>
#include <stdin.h>
#include "varaiadic_functions.h"

/**
 * print_strings - prints strings followeed by a new line
 * @separator: separator to print betweeen the strings
 * @n: number of strings to print
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);

	for (int i = 0; i < n; i++)
	{
		char *str = va_arg(args, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else 
		{
			printf("%S", str);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
