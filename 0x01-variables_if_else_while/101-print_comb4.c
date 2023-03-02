#include <stdio.h>

/**
 * main - Entry
 * Return: 0 (on success)
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Mon Feb 20 12:41:33 PM EAT 2023
 * Filename: 101-print_comb4.c
 */
int main(void)
{
	const int MAX = 10;
	const int LAYERS = 3;
	int outer, mid, inner;

	for (outer = 0; outer < MAX; outer++)
	{
		for (mid = outer + 1; mid < MAX; mid++)
		{
			for (inner = mid + 1; inner < MAX; inner++)
			{
				putchar(outer + '0');
				putchar(mid + '0');
				putchar(inner + '0');

				if (outer < MAX - LAYERS)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}

