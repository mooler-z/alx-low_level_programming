#include "main.h"

/**
 * string_toupper - Entry
 * @s: string to be uppercased
 * Return: uppercased string
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Thu Mar  2 05:18:17 PM EAT 2023
 * Filename: 5-string_toupper.c
 */
char *string_toupper(char *s)
{
	int i, diff;

	diff = 32;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - diff;
	}
	return (s);
}

