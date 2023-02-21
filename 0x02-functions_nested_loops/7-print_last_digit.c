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
	int res;

	if (n < 0)
		n = -1 * n;
	res = n % 10;
	if (res < 0)
		res = -1 * res;
	_putchar(res + '0');
	return (res);
}

