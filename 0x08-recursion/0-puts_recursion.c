#include "main.h"

/**
 * _puts_recursion - Entry
 * @s: the string to recurse over
 * Return: void
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Wed Mar  8 07:28:52 AM EAT 2023
 * Filename: 0-puts_recursion.c
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
		return;
	}
}

