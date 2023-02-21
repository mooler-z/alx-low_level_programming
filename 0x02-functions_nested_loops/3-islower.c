#include "main.h"

/**
 * _islower - Entry
 * Return: 1 if lower else 0
 * @c: letter to be checked
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Tue Feb 21 03:05:32 PM EAT 2023
 * Filename: 3-islower.c
 */
int _islower(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	else
		return (0);
}

