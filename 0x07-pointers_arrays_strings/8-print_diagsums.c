#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: square matrix of which we print the sum of diagonals
 * @size: size of the matrix
 * Return: 0 (on success)
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Mon Mar  6 07:08:28 PM EAT 2023
 * Filename: 8-print_diagsums.c
 */
void print_diagsums(int *a, int size)
{
	int i;

	unsigned int sum, sum1;

	sum = 0;
	sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[(size * i) + i];
		sum1 += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", sum, sum1);
}

