#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int digit;

	for (digit = 1; digit <= 9; digit++)
	putchar(digit + '0');
	putchar('\n');
	return (0);
}
