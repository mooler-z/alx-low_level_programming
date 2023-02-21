#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Entry
 * Return: Void
 * @n: limit
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Tue Feb 21 05:26:34 PM EAT 2023
 * Filename: 100-times_table.c
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = j * i;
				if (j == 0)
				{
					_putchar(k + '0');
				}
				else if (k < 10 && j != 0)
				{
					printf(",   ");
				}
				else if (k >= 10 && k < 100)
				{
					printf(",  ");
				}
				else if (k >= 100)
				{
					printf(", ");
				}
				printf("%d", k);
			}
			printf("\n");
		}
	}
}
