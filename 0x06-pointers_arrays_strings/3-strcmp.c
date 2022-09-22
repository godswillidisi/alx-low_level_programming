#include "main.h"

/**
 * _strcmp - Entry point
 * @s1: string 1
 * @s2: string 2
 * Return: Always 0
 */

int _strcmp(char *s1, char *s2)
{
	char *str_1 = s1;
	char *str_2 = s2;

	while (*str_1 != '\0' && *str_2 != '\0' && *str_1 == *str_2)
	{
		str_1++;
		str_2++;
	}

	return (*str_1, *str_2);
}
