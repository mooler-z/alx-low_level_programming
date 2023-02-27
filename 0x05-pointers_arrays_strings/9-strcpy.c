#include "main.h"

/**
 * _strcpy - Entry
 * Return: char
 * @src: source of string
 * @dest: where to be copied to
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Mon Feb 27 03:24:27 PM EAT 2023
 * Filename: 9-strcpy.c
 */
char *_strcpy(char *dest, char *src)
{
	int counter, len;

	len = 0;
	for (; src[len] != '\0'; len++)
	{}

	for (counter = 0; counter < len; counter++)
		dest[counter] = src[counter];

	dest[counter] = '\0';

	return (dest);
}

