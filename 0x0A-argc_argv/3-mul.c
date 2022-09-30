#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main  - Multiplies two numbers
 * @argc: counts arguments
 * @argv: arguments
 * Return: 0 for success and 1 for failure
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
