#include <stdio.h>

/**
 * main - Entry
 * Return: 0 (on success)
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Mon Feb 20 12:03:09 PM EAT 2023
 * Filename: 100-print_comb3.c
 */
int main(void)
{
	/* revised and refactored code */
	const int MAX = 10;
	int outer, inner;

	for (outer = 0; outer < MAX; outer++)
	{
		for (inner = outer + 1; inner < MAX; inner++)
		{
			putchar(outer + '0');
			putchar(inner + '0');

			if (outer < MAX - 2)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

