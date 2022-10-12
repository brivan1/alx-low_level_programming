#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the number of arguments passed to it
 * @argc: the number of arguments
 * @argv: the names of arguments
 * Return: 0
 */
int main(int argc, _attribute_((unused))char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
