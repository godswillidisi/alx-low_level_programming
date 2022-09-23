#include "main.h"

/**
 * rot13 - Entry point
 * @str: string
 * Return: Always 0
 */

char *rot13(char *str)
{
	int c = 0, i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + c) != '\0')
	{

		for (i = 0; i < 52; i++)
		{
			if (*(s + c) == alphabet[i])
			{
				*(s + c) = rot13[i];
				break;
			}
			}
		c++;
	}

	return (s);
}
