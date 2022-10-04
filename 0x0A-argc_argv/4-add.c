#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * main  - Multiplies two numbers
 * @argc: counts arguments
 * @argv: arguments
 * Return: 0 for success and 1 for failure
 */

int main(int argc, char *argv[])
{
	int i, c, sum = 0;

	for (i = 0; i < argc; i++)
	{
		for (c = 0; argv[i][c] != '\0'; c++)
		{
			if (!isdigit(argv[i][c]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
