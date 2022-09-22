#include "main.h"

/**
 * *_strncpy - Entry point
 * @dest: pointer
 * @src: pointer
 * @n: integer
 * Return: ALways 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, src_a = 0;

	while (src[i++])
		src_a++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = src_a; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
