#include"main.h"

/**
 * _isdigit - Entry point
 * @c:  digit
 * Return: Always 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
