nclude <stdio.h>

#include <unistd.h>

/**
 *
 *  * main - Entry point
 *
 *   *
 *
 *    * Return: Always 0 (Success)
 *
 *     * Description: prints the alphabet in lowercase\n
 *
 *      * Return: Always 0 (success)
 *
 *       */

int main(void)

{

		int ch;



			char c;



				for (c = 'a'; c <= 'z'; c++)

							putchar(c);

						putchar('\n');



							for (ch = 'a'; ch <= 'z'; ch++)

									{

												putchar(ch);

													}

								putchar('\n');

								return (0);

}
