#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void);
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
