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
	while (dest[a++])
		b++;
	for (a = 0; src[a] && a < n; a++)
		dest[b++] = src[a];

	return (dest);
}
