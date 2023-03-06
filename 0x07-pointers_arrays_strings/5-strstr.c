#include <stdio.h>
#include "main.h"

/**
 * _strstr - Entry
 * @haystack: string to search in
 * @needle: the substring to be searched for
 * Return: Returns a pointer to the beginning of the located
 * substring, or NULL if the substring is not found.
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Mon Mar  6 03:04:04 PM EAT 2023
 * Filename: 5-strstr.c
 */
char *_strstr(char *haystack, char *needle)
{
	int x, y;

	for (x = 0; haystack[x] != '\0'; x++)
	{
		for (y = 0; needle[y] != '\0'; y++)
		{
			if (haystack[x + y] != needle[y])
				break;
		}
		if (!needle[y])
			return (&haystack[x]);
	}
	return (NULL);
}

