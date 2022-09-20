#include "main.h"
#include <stdio.h>
/**
 * print_array - Entry point
 * @a: integer
 * @n: integer
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	int c = 0;

	for (; c < n; c++)
	{
		printf("%d", 8(a + c));
		if (c != (n-1))
			printf(", ");
	}
	printf("\n");
}
