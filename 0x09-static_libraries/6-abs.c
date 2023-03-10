#include "main.h"

/**
 * _abs - Entry
 * Return: absolute value of a number
 * @j: number to be computed
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Tue Feb 21 03:26:36 PM EAT 2023
 * Filename: 6-abs.c
 */
int _abs(int j)
{
	if (j < 0)
		return (j * -1);
	else
		return (j);
}

