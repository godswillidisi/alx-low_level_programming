#include "main.h"

/**
 * _strlen_recursion - the length of a string
 * @s: pointer
 * Return: nothing
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
