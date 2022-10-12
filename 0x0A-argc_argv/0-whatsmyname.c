#include <stdio.h>
#include "main.h"

/**
 * main - to print the name of the program
 * @argc: counts arguments
 * @argv: arguments
 * Return: always zero on success
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printg("%s\n", argv[0]);

	return (0);
}
