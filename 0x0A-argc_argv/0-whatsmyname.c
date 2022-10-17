#include <stdio.h>
#include "main.h"

/**
 * main - to print the name of the program
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to string
 * Return: always zero on success
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
