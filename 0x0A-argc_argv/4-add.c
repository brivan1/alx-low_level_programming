#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * check_number - checks the string to determine if they are digits
 * @str: array of string
 * Return: 0 if successful
 */

int check_number(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}

	return (1);
}

/**
 * main - adds positive numbers
 * @argc: count arguments
 * @argv: array of argc
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count;

	int str_int;

	int sum = 0;

	for (count = 1; count < argc; count++)
	{
		if (check_number(argv[count]))
		{
			str_int = atoi(argv[count]);
			sum += str_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	
	printf("%d\n", sum);
	return (0);
}
