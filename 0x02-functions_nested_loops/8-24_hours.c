#include "main.h"

/**
 * jack_bauer - Entry
 * Return: 0 (on success)
 * Author: Mulugeta Z
 *
 * Description: print 24 hours
 * Created:  Tue Feb 21 03:43:37 PM EAT 2023
 * Filename: 8-24_hours.c
 */
void jack_bauer(void)
{
	int hr, min;

	hr = 0;
	for (; hr < 24;)
	{
		min = 0;
		for (; min < 60;)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
			min++;
		}
		hr++;
	}
}

