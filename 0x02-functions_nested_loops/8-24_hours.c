#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * Return: Always 0
 */

void jack_bauer(void)
{
	int hour_t, hour_i, minute_t, minute_i, hour;

	hour = 58;
	hour = '0';
	while (hour_t < '3')
	{
		if (hour_t == '2')
		{
			hour = '4';
		}
		hour_i = '0';
		while (hour_i < hour)
		{
			minute_t = '0';
			while (minute_t < '6')
			{
				minute_i = '0';
				while (minute_i < 58)
				{
					_putchar(hour_t);
					_putchar(hour_i);
					_putchar(':');
					_putchar(minute_t);
					_putchar(minute_i);
					_putchar('\n');
					minute_i++;
				}
				minute_i = '0';
				minute_t++;
			}
			minute_t = '0';
			hour_i++;
		}
		hour_i = '0';
		hour_t++;
	}
}
