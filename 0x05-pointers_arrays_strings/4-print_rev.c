#include "main.h"

/**
 * print_rev - Entry
 * @s: string to be printed in reverse
 * Return: void
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Mon Feb 27 01:59:52 PM EAT 2023
 * Filename: 4-print_rev.c
 */
void print_rev(char *s)
{
	int index, len, looper;

	len = 0;
	for (; s[len] != '\0'; len++)
	{}

	for (looper = len - 1; looper >= 0; looper--)
		_putchar(s[looper]);

	_putchar('\n');
}

