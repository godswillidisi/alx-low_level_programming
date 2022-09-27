#include "main.h"

/**
 * set_string - changes value of a pointer to a char.
 * @s: pointer
 * @to: char
 * Return: 0
 */

void set_string(char **s, char *to)
{
	*s = to;
}
