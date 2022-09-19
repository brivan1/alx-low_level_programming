#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints a stirng
 * @str: string to print
 *
 * Return: 0
 */

void puts(char *str)
{
	int i, len = _strlen(str);

	for (i = ((len - 1) / 2) + 1; i < len; i++)
		putchar(*(str + i));
	putchar(10);
}

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: length of the given string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
