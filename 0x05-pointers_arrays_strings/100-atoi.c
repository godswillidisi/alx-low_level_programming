#include "main.h"

/**
 * _atoi - Entry point
 * @s: character
 * Return: Always 0
 */

int _atoi(char *s)
{
	unsigned int c = 0, size = 0, j = 0, k = 1, m = 1, i;
	
	while (*(s + c) != '\0')
	{
		if (size > 0 && (*(s + c) < '0' || *(s + c) > '9'))
			break;
		if (*(s + c) == '-')
			k *= -1;
		if ((*(s + c) >= '0') && (*(s + c) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size ++;
		}
		c++;
	}
	for (i = c - size; i < c; i++)
	{
		j = j + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (j * k);
}
