#include "main.h"

/**
 * _strlen_recursion - Entry
 * @s: string to measure length
 * Return: length of a string
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Wed Mar  8 07:51:28 AM EAT 2023
 * Filename: 2-strlen_recursion.c
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

