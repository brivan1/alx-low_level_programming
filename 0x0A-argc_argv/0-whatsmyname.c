#include <stdio.h>

/**
 * main - to print the name of the program
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to string
 * Return: always zero on success
 */

int main(int argc _attribute_((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
