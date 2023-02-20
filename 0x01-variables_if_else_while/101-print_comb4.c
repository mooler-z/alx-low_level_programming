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
	int left, mid, right, cond, i;

	left = 0;
	i = 10;
	for (; left < i;)
	{
		mid = 0;
		for (; mid < i;)
		{
			right = 0;
			for (; right < i;)
			{
				/* printf("left(%d) | mid(%d) | right(%d)\n", left, mid, right); */
				cond = ((left < mid) && (mid < right));
				if (cond)
				{
					putchar(left + '0');
					putchar(mid + '0');
					putchar(right + '0');
				}
				if (cond && (left < i - 3))
				{
					putchar(',');
					putchar(' ');
				}
				right++;
			}
			mid++;
		}
		left++;
	}
	putchar('\n');
	return (0);
}

