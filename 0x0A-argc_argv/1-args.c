#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints the number of arguments passed to it
 * @argc: the number of arguments
 * @argv: the names of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
