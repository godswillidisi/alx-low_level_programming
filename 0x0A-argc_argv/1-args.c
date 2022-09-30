#include <stdio.h>
#include "main.h"

/**
 * main - prints arguments passed into it
 * @argc: counts arguments
 * @argv: Arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
