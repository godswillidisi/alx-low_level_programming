#include "main.h"

/**
 * *_memcpy - a function that copies memory area
 * @dest: stored memory
 * @src: copied memory
 * @n: bytes
 *
 * Return: copied memory with n byte change
 */

char *_memcpy(char *dest, char *src, unsighned int n)
{
	int i = 0;
	int j = 0;

	while (n > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}
	return (dest);
}
