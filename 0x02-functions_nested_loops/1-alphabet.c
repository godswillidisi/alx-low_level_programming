#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: printing the alphabet
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)

{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
