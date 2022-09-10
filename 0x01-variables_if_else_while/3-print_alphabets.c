#include <stdio.h>


/*
 * main - The alphabets printing in lowercase and uppercase
 *
 * Main - print alphabet in lower and uppercase
 *
 *
 * Description: Alphabets
 *
 * Return: Always 0 (success)
 *
 */

int main(void)

{

	char ch;



	for (ch = 'a' ; ch <= 'z' ; ch++)

	{

		putchar(ch);

	}

	for (ch = 'A' ; ch <= 'Z' ; ch++)

	{

		putchar(ch);

	}

	putchar('\n');

	return (0);

}
