#include <stdio.h>

/**
* main - Entry
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	n = 0;
	for (; n < 10; )
		putchar(n++ + '0');

	putchar('\n');

	return (0);
}
