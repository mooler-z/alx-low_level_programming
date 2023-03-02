#include "main.h"

/**
 * print_number - Entry
 * @n: number to be printed
 * Return: void
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Thu Mar  2 09:56:30 PM EAT 2023
 * Filename: 101-print_number.c
 */
void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		i = -n;
		_putchar('-');
	} else
	{
		i = n;
	}

	if (i / 10)
		print_number(i / 10);

	_putchar((i % 10) + '0');
}

