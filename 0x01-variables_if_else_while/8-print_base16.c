#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char dialp;

	for (dialp = '0'; dialp <= '9'; dialp++)
	putchar(dialp);
	for (dialp = 'a'; dialp < 'g'; dialp++)
	putchar(dialp);

	putchar('\n');

	return (0);
}
