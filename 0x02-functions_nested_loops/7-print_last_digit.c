#include "main.h"

/**
 * print_last_digit - Entry point
 * @n: print integer
 * Return: Always 0 (success)
 */
int print_last_digit(int n)
{
	int digt;

	if (n < 0)
	{
		digt = (-1 * (n % 10));
		_putchar (digt + '0');
		return (digt);
	}
	else
	{
		digt = (n % 10);
		_putchar (digt = '0');
		return (digt);
	}
}
