#include "main.h"
#include <stdio.h>

/**
 * _abs - Entry point
 *
 * @n: The integer to print
 * Return: Always 0 (success)
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n);
	}
}
