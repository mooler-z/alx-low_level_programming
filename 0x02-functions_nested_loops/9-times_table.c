#include "main.h"

/**
 * times_table - Entry
 * Return: void
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Tue Feb 21 03:51:46 PM EAT 2023
 * Filename: 9-times_table.c
 */
void times_table(void)
{
	int col, row;

	col = 0;
	for (; col < 10;)
	{
		row = 0;
		for (; row < 10;)
		{
			/* printf("%d",(col * row)); */
			if ((col * row) < 10)
			{
				_putchar((col * row) + '0');
			}
			else
			{
				_putchar(((col * row) / 10) + '0');
				_putchar(((col * row) % 10) + '0');

			}
			if (row < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			if ((col * row) < 10)
			{
				_putchar(' ');
				_putchar(' ');
			}
			row++;
		}
		col++;
		_putchar('\n');
	}
}

