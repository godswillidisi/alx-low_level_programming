#include "main.h"

/**
 * *_strncat - Entry point
 * @dest: pointer
 * @src: pointer
 * @n: integer
 * Return: Always 0
 */

char *_strncat(char *dest, char *src, int n);
{
	int a, b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}

	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}

	dest[a]  = '\0';

	return (dest);
}
