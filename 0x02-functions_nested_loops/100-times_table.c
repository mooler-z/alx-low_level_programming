#include <stdio.h>

/**
 * print_times_table - Entry
 * print_space - print space
 * Return: Void
 * @n: limit
 * Author: Mulugeta Z
 *
 *
 * Description:
 * Created:  Tue Feb 21 05:26:34 PM EAT 2023
 * Filename: 100-times_table.c
 */

void print_space(int n)
{
	int i = 0;

	_putchar(',');
	for (; i < n;)
		_putchar(' ');
}

void print_times_table(n)
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
					print_space(3);
					_putchar(k + '0');
				}
				else if (k >= 10 && k < 100)
				{
					_putchar(2);
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				}
				else if (k >= 100)
				{
					print_space(1);
					_putchar((k / 100) + '0');
					_putchar(((k / 10) % 10) + '0');
					_putchar((k % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}

