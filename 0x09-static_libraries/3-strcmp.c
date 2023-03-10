#include "main.h"

/**
 * _strcmp - Entry
 * @s1: first string for comparison
 * @s2: second string for comparison
 * Return: 0 if equal, negative if s1 < s2 and postive if s1 > s2
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Thu Mar  2 04:46:04 PM EAT 2023
 * Filename: 3-strcmp.c
 */
int _strcmp(char *s1, char *s2)
{
	for (; *s1 == *s2; s1++, s2++)
	{
		if (*s1 == '\0')
			return (0);
	}

	return (*s1 - *s2);
}

