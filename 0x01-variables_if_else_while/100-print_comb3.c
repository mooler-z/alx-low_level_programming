#include <stdio.h>

/**
 * main - Entry
 * Return: 0 (on success)
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Mon Feb 20 12:03:09 PM EAT 2023
 * Filename: doubledigi.c
 */
int main(void)
{
	int left, right, cond;

	left = 0;
	for (; left < 10;)
	{
		right = 0;
		for (; right < 10;)
		{
			cond = (left != right) && (left < right);
			if (cond)
			{
				putchar(left + '0');
				putchar(right + '0');
			}
			if (cond && left < 8)
			{
				putchar(',');
				putchar(' ');
			}
			right++;
		}
		left++;
	}
	putchar('\n');
	return (0);
}

