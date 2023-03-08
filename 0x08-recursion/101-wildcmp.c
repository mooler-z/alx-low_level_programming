#include "main.h"

/**
 * wildcmp - Entry
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: 1 if identical else 0
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Wed Mar  8 08:51:53 AM EAT 2023
 * Filename: 101-wildcmp.c
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0' && *s1 == '\0')
		return (1);

	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

	return (0);
}

