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
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
