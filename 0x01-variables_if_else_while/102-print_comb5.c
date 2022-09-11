#include<stdio.h>
#include<unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int v, b, n, m;

	for (v = 48; v <= 57; v++)
	{
		for (b = 48; b <= 57; b++)
		{
			for (n = 48; n <= 57; n++)
			{
				for (m = 48; m <= 57; m++)
				{
				if (((n + m) > (v + b) && n >= v) || v < n)
				{
					putchar(v);
					putchar(b);
					putchar(' ');
					putchar(n);
					putchar(m);

					if (v + b + n + m == 227 && v == 57)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
