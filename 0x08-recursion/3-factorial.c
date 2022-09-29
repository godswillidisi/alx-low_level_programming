#include"main.h"

/**
 * factorial - factorial of a number
 * @n: the number whose factorial is o be calculated
 * Return: Factorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n ==1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
