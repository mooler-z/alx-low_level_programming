#include "main.h"

/**
 * _putchar - Entry
 * @c: character to be printed
 * Return: 1 (on success) else -1
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Mon Feb 27 11:24:33 AM EAT 2023
 * Filename: _putchar.c
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

