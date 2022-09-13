#include "main.h"

/**
 * _islower - Entry point
 * @c: integer value
 * Description: return wither 1 or 0
 *
 * Return: Always 0 (success)
 *
 */

int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
