#include "main.h"

/**
 * print_rev - Entry point
 * @s: character
 * Return: Always 0
 */

void print_rev(char *s)
{
	int a = 0;
	int b;

	while (s[a] != '\0')
	{
		a++;
	}
	for (b = a - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
