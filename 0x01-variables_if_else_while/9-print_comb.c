#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	int n;

	n = 0;
	for (; n < 10;)
	{
		if (n)
		{
			putchar(',');
			putchar(' ');
		}
		putchar(n++ + '0');
	}
	putchar('\n');
	return (0);
}
