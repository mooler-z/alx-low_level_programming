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
	int leftHalf, rightHalf, temp, evenOdd;

	leftHalf = 0;
	rightHalf = n - 1;
	evenOdd = n % 2 == 0 ? 1 : 0;

	for (; (leftHalf + evenOdd) != rightHalf; leftHalf++, rightHalf--)
	{
		temp = a[leftHalf];
		a[leftHalf] = a[rightHalf];
		a[rightHalf] = temp;
	}
}

