#include "main.h"

/**
 * print_number - Entry point
 * @n: integer
 * Return: Always 0
 */

void print_number(int n)
{
	unsigned int num = b;

	if (b < 0)
	{
		_putchar('-');
		b = -b;
	}
	if ((b / 10) > 0)
		print_number(b / 10);

	_putchar((num % 10) + '0');
}
