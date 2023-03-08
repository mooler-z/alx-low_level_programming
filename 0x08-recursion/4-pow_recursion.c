#include "main.h"

/**
 * _pow_recursion - Entry
 * @x: number to be multiplied to itself
 * @y: how many times should it multiply to itself
 * Return: return x, y times itself
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Wed Mar  8 07:51:15 AM EAT 2023
 * Filename: 4-pow_recursion.c
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

