#include <stdio.h>
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	const int MAX = 100;
	const int LAYERS = 2;
	int outer, inner;

	for (outer = 0; outer < MAX; outer++)
	{
		for (inner = outer + 1; inner < MAX; inner++)
		{
			putchar((outer / 10) + '0');
			putchar((outer % 10) + '0');
			putchar(' ');
			putchar((inner / 10) + '0');
			putchar((inner % 10) + '0');

			if (outer < MAX - LAYERS)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
