#include "main.h"

/**
 * _isalpha - Entry
 * Return: 1 if alpha else 0
 * @c: letter to be checked
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Tue Feb 21 03:11:49 PM EAT 2023
 * Filename: 4-isalpha.c
 */
int _isalpha(int c)
{
	if ((c <= 122 && c >= 97) || (c <= 90 && c >= 65))
		return (1);
	else
		return (0);
}

