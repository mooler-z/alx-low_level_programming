#include "main.h"

/**
 * puts2 - Entry
 * @str: string to be printed
 * Return: void
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Mon Feb 27 02:53:13 PM EAT 2023
 * Filename: 6-puts2.c
 */
void puts2(char *str)
{
	int len, counter;

	len = 0;
	for (; str[len] != '\0'; len++)
	{}

	for (counter = 0; counter < len; counter++)
	{
		if (counter % 2 == 0)
			_putchar(str[counter])
	}
	_putchar('\n');
}

