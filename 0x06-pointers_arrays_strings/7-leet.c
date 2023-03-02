#include "main.h"

/**
 * leet - Entry
 * @s: unlit string
 * Return: lit string
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Thu Mar  2 05:50:50 PM EAT 2023
 * Filename: 7-leet.c
 */
char *leet(char *s)
{
	char l[5] = {'a', 'e', 'o', 't', 'l'};
	char r[5] = {'4', '3', '0', '7', '1'};
	int i, k, j;

	i = 0;
	k = 32;
	for (; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (((l[j] - k) == s[i]) || (l[j] == s[i]))
				s[i] = r[j];
		}
	}

	return (s);
}

