#include "main.h"
/**
 * jack_baeur this function prints each minute of Jack Baeur's day, 24 hours
 * from 00:00 hours to 23:59 hours
 * minute loops counts minutes while hour loop counts hours
 * and reset minutes
 * Return: 0
 */
void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;
	int hours_remainder;
	int mins_remainder;

	while (hours <= 23)
	{
		while (minutes <= 59)
		{
			minutes_remainder = minutes % 10;

			hours_remainder = hours % 10;

			_putchar(hours / 10 + '0');

			_putchar(hours_remainder + '0');

			_putchar(':');
			_putchar(minutes / 10 + '0');

			_putchar(minutes_remainder + '0');

			minutes ++;
			_putchar('\n');
		}
		hours++;
		minutes = 0;
	}
}
