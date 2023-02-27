#include <stdio.h>

/**
 * _puts - Entry
 * @str: string to be printed
 * Return: void
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Mon Feb 27 01:37:29 PM EAT 2023
 * Filename: 3-puts.c
 */
void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}

