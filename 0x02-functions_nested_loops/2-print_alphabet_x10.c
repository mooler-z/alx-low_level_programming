#include "main.h"

/**
 * print_alphabet_x10 - Entry
 * Return: 0 (on success)
 * Author: Mulugeta Z
 *
 * Description: print lowercase alphabets 10x
 * Created:  Tue Feb 21 03:00:09 PM EAT 2023
 * Filename: 2-print_alphabet_x10.c
 */
void print_alphabet_x10(void)
{
	char c = 97, i = 0;

	while (i < 10)
	{
		while (c <= 122)
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		c = 97;
		i++;
	}
}

