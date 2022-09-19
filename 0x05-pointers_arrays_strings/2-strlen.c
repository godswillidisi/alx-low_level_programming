#include "main.h"

/**
 * _strlen - string length
 * @s: character
 * Return: ALways 0
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}
