#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, o, p;

	for (i = '0'; i <= '9'; i++)
	{
		for (o = '0'; o <= '9'; o++)
		{
			for (p = '0'; p <= '9'; p++)
			{
				if (i < o && o < p)
				{
					putchar(i);
					putchar(o);
					putchar(p);

					if (i != '7')
					{

						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);

}
