#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print numbers
 * @n: count n to 98
 * Return: Always 0 (success)
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}
	printf("98");
	putchar('\n');
}
