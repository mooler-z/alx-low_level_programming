#include <stdio.h>

/**
* main - Entry
*
* Return: Always 0 (Success)
*/
int main(void)
{
		char c = 48;

		while (c <= 102)
		{
			if (c == 58)
			{
				c = 97;
			}
			putchar(c);
			c++;
		}

		putchar('\n');

	return (0);
}
