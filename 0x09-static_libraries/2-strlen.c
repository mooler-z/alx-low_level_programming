#include <stdio.h>

/**
 * _strlen - Entry
 * Return: len
 * @s: the string to be computed
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Mon Feb 27 01:31:49 PM EAT 2023
 * Filename: 2-strlen.c
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

