#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - Entry
 * @s: string to search in
 * @accept: string for lookup
 * Return: Returns a pointer to the byte in s that matches
 * one of the bytes in accept, or NULL if no such byte is found
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Mon Mar  6 02:56:40 PM EAT 2023
 * Filename: 4-strpbrk.c
 */
char *_strpbrk(char *s, char *accept)
{
	int x, y;

	for (x = 0; *s != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (*s == accept[y])
				return (s);
		}
		s++;
	}
	return (NULL);
}

