#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: first sring
 * @s2: second string
 * @n: index
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	char *str;
	unsigned int l1;
	unsigned int l2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = strlen(s1);
	l2 = strlen(s2);
	if (n >= l2)
		n = l2;
	str = malloc((l1 + l2 + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
	{
		str[i] = s1[i];
	}

	for (; i < l1 + n; i++)
	{
		str[i] = s2[i - l1];
	}
	str[i] = '\0';
	return (str);
}
