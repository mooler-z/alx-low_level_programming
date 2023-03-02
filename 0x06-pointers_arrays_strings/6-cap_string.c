#include "main.h"

int check_separator(char c);

/**
 * cap_string - Entry
 * @s: string to be capitalized
 * Return: capitalized string
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Thu Mar  2 05:31:43 PM EAT 2023
 * Filename: 6-cap_string.c
 */
char *cap_string(char *s)
{
	int i, cond, diff;

	i = 0;
	diff = 32;
	for (; s[i] != '\0'; i++)
	{
		if (!i && (s[i] >= 'a' && s[i] <= 'z'))
			s[i] -= diff;

		cond = (s[i + 1] >= 'a' && s[i + 1] <= 'z');
		if (check_separator(s[i]) && cond)
		{
			s[i + 1] -= diff;
		}
	}
	return (s);
}

/**
 * check_separator - checks if it is a separator
 * @c: character to be checked
 * Return: 1 if separator 0 otherwise
 */
int check_separator(char c)
{
	int i;
	char separators[13] = {' ', '\t', '\n', ',', ';', '.',
				'!', '?', '"', '(', ')', '{', '}'};

	i = 13;
	for (; i >= 0; i--)
	{
		if (separators[i] == c)
			return (1);
	}
	return (0);
}
