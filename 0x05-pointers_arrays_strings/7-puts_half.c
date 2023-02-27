#include "main.h"

/**
 * puts_half - Entry
 * @str: string to be halved
 * Return: void
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Mon Feb 27 03:02:56 PM EAT 2023
 * Filename: 7-puts_half.c
 */
void puts_half(char *str)
{
	int len, counter, evenOdd, cond;

	len = 0;
	for (; str[len] != '\0'; len++)
	{}

	if (len % 2 == 1)
	{
		cond = len - 1;
		evenOdd = (len - 1) / 2;
	}
	else
	{
		cond = len;
		evenOdd = len / 2;
	}

	for (counter = evenOdd; counter < cond; counter++)
	{
		if (len % 2 == 0)
			_putchar(str[counter]);
		else
			_putchar(str[counter + 1]);
	}

	_putchar('\n');
}

