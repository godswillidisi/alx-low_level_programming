#include "main.h"
#include<stddef.h>

/**
 * _strpbrk - searching a string for bytes
 * @s: string
 * @accept: bytes
 * Return: Pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return (NULL);
}
