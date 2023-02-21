#include "main.h"

/**
 * print_sign - Entry
 * Return: 1 if pos, 0 if zero, -1 if neg (on success)
 * @n: number to be checked
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Tue Feb 21 03:20:28 PM EAT 2023
 * Filename: 5-sign.c
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

