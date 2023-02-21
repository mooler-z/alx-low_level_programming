#include "main.h"
/**
 * print_last_digit - Entry
 * Return: last digit of the number
 * @n: number from which the last digi is going to be extracted
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Tue Feb 21 03:33:30 PM EAT 2023
 * Filename: 7-print_last_digit.c
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = -1 * n;

	_putchar((n % 10) + '0');
	return (n % 10);
}

