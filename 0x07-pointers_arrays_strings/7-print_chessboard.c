#include "main.h"

/**
 * print_chessboard - Entry
 * @a: 2d array
 * Return: void
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Mon Mar  6 03:10:16 PM EAT 2023
 * Filename: 7-print_chessboard.c
 */
void print_chessboard(char (*a)[8])
{
	int x, y, len;

	len = 8;
	for (x = 0; x < len; x++)
	{
		for (y = 0; y < len; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}

