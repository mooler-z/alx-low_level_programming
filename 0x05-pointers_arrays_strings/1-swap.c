#include <stdio.h>

/**
 * swap_int - Entry
 * Return: void
 * @a: pointer to first int
 * @b: pointer to second int
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Mon Feb 27 01:27:01 PM EAT 2023
 * Filename: 1-swap.c
 */
void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

