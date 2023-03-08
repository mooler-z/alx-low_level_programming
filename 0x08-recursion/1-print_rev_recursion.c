#include "main.h"

/**
 * _print_rev_recursion - Entry
 * @s: string to be recursed
 * Return: void
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Wed Mar  8 07:36:27 AM EAT 2023
 * Filename: 1-print_rev_recursion.c
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

