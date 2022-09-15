#include "main.h"

/**
 * print_most_numbers - Entry point
 *
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int r;

	for (r = 48; r < 58; r++)
	{
		if (r != 50 && r != 52)
		{
			_putchar(r);
		}
	}
	_putchar('\n');
}
