#include <stdio.h>

void _attribute_((constructor)) hare(void);

/**
 * hare- prints string before the main function is executed
 * Return: 0
 */

void hare(void)
{
	printf("you're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
