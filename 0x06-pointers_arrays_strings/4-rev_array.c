#include "main.h"

/**
 * reverse_array - Entry
 * @a: array to be reversed
 * @n: length of array (thanks alx, lol)
 * Return: void
 * Author: Mulugeta Z
 *
 * Description: .
 * Created:  Thu Mar  2 04:52:51 PM EAT 2023
 * Filename: 4-rev_array.c
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
}

