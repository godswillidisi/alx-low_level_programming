#include"main.h"

/**
 * print_alphabet_x10 - Entry point
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{

	char v;
	int i;

	while (i <= 9)
	{
		for (v = 'a'; v <= 'z'; v++)
		{
			_putchar(v);
		}
		_putchar('\n');
		i++;
		}

}
