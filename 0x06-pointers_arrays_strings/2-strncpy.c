#include "main.h"

/**
 * *_strncpy - Entry point
 * @dest:
 * @src
 * @n: integer
 * Return: ALways 0
 */

char *_strncpy(char *dest, char *src, int n);
{
	int a;

	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
