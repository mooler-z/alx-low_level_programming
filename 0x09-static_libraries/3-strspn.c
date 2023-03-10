#include "main.h"

/**
 * _strspn - Entry
 * @s: string for evaluation
 * @accept: string to be matched with s
 * Return: Returns the number of bytes in the initial
 * segment of s which consist only of bytes from accept
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Mon Mar  6 02:46:18 PM EAT 2023
 * Filename: 3-strspn.c
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, f, flag;

	f = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				f++;
				flag = 1;
			}
		}
		if (flag == 0)
			return (f);
	}
	return (0);
}

