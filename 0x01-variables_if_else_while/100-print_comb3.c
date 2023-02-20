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
	int left, right, cond, i;

	left = 0;
	i = 10;
	for (; left < i;)
	{
		right = 0;
		for (; right < i;)
		{
			cond = (left != right) && (left < right);
			if (cond)
			{
				putchar(left + '0');
				putchar(right + '0');
			}
			if (cond && (left < i - 2))
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

