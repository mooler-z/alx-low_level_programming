#include <stdio.h>

/**
 * main - compute and add all products of 3 n 5
 * Return: 0 (on success)
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Tue Feb 21 06:04:32 PM EAT 2023
 * Filename: 101-natural.c
 */
int main(void)
{
	unsigned long int sum3, sum5, sum;
	int i;

	sum3 = 0;
	sum5 = 0;
	sum = 0;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			sum3 = sum3 + i;
		} else if ((i % 5) == 0)
		{
			sum5 = sum5 + i;
		}
	}
	sum = sum3 + sum5;
	printf("%lu\n", sum);
	return (0);
}

