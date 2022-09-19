#include "main.h"

/**
 * _puts - Entry point
 * @str: string
 * Return: Always 0
 */

void _puts(char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
