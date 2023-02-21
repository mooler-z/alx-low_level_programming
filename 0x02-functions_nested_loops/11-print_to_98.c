#include "main.h"

/**
 * print_to_98 - Entry
 * Return: void
 * @n: limit
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Tue Feb 21 04:56:23 PM EAT 2023
 * Filename: 11-print_to_98.c
 */
void print_to_98(int n)
{
	int incDec = n <= 98 ? 1 : -1;

	while (n != 98)
	{
		if (n < 0)
		{
			printf("%d", n);
		}
		else if (n >= 0 && n < 10)
			putchar(n + '0');
		else
		{
			printf("%d", n);
		}
		printf(", ");
		n = n + incDec;
	}
	printf("98\n");
	return (0);
}

