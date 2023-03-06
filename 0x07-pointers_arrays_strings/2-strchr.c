#include "main.h"
#include <stdio.h>

/**
 * _strchr - Entry
 * @s: string to be searched in
 * @c: char to be searched
 * Return: the location of the char, not found NULL
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Mon Mar  6 02:32:23 PM EAT 2023
 * Filename: 2-strchr.c
 */
char *_strchr(char *s, char c)
{
	int loc;

	while (1)
	{
		loc = *s++;
		if (loc == c)
			return (s - 1);

		if (loc == 0)
			return (NULL);
	}
}

