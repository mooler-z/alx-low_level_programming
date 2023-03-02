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
	int leftHalf, rightHalf, temp;

	leftHalf = 0;
	rightHalf = n - 1;

	for (; leftHalf < rightHalf / 2; leftHalf++)
	{
		temp = a[rightHalf];
		a[rightHalf] = a[leftHalf];
		a[leftHalf] = temp;

	}
}

