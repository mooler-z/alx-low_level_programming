#include "main.h"

/**
 * print_array - Entry
 * @a: pointer to the array
 * @n: length of array
 * Return: void
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Mon Feb 27 03:15:15 PM EAT 2023
 * Filename: 8-print_array.c
 */
void print_array(int *a, int n)
{
	int counter;

	for (counter = 0; counter < n; counter++)
	{
		if (counter == 0)
			printf("%d", a[counter]);
		else
			printf(", %d", a[counter]);
	}
	printf("\n");
}

