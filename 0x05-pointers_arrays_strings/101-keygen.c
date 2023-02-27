#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry
 * Return: 0 (on success)
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Mon Feb 27 04:32:24 PM EAT 2023
 * Filename: 101-keygen.c
 */
int main(void)
{
        int len = 8;
	int pass[len];
	int i, sum, n;

	sum = 0;	

	srand(time(NULL));

	for (i = 0; i < len; i++)
	{
		pass[i] = rand() % 78;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}

