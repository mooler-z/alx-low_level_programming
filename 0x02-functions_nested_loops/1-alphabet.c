#include "main.h"

/**
 * print_alphabet - Entry
 * Return: void
 * Author: Mulugeta Z
 *
 * Description: simply print lowercase alphabets
 * Created:  Tue Feb 21 02:50:06 PM EAT 2023
 * Filename: 1-alphabet.c
 */
void print_alphabet(void)
{
	char c = 97;

	while (c <= 122)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}

