#include "main.h"

/**
 * rot13 - Entry
 * @s: string to be rotated
 * Return: rotated string
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Thu Mar  2 08:14:30 PM EAT 2023
 * Filename: 100-rot13.c
 */
char *rot13(char *s)
{
	int small, big, cond, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		small = (s[i] >= 'a' && s[i] <= 'z');
		big = (s[i] >= 'A' && s[i] <= 'Z');
		cond = small || big;
		if (cond)
		{
			if (small)
				s[i] = 97 + (((s[i] - 97) % 26) + 13) % 26;
			else
				s[i] = 65 + (((s[i] - 65) % 26) + 13) % 26;
		}
	}

	return (s);
}

