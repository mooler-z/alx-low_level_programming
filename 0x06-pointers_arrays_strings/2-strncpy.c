#include "main.h"

/**
 * _strncpy - Entry
 * @dest: destination string
 * @src: source string
 * @n: len of string to be copied
 * Return: pointer to destination
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Thu Mar  2 04:29:39 PM EAT 2023
 * Filename: 2-strncpy.c
 */
char *_strncpy(char *dest, char *src, int n)
{
	int counter;

	counter = 0;

	for (; src[counter] != '\0' && counter < n;)
	{
		dest[counter] = src[counter];
		counter++;
	}

	for (; counter < n;)
	{
		dest[counter] = '\0';
		counter++;
	}

	return (dest);
}

