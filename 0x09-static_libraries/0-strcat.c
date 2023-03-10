#include "main.h"

/**
 * _strcat - Entry
 * @dest: string to which it is going to be added
 * @src: string to add from
 * Return: pointer to the result string
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Thu Mar  2 03:31:45 PM EAT 2023
 * Filename: 0-strcat.c
 */
char *_strcat(char *dest, char *src)
{
	int strLen, looper;

	strLen = 0;
	looper = 0;

	while (dest[strLen] != '\0')
		strLen++;

	while (src[looper] != '\0')
	{
		dest[strLen] = src[looper];
		looper++;
		strLen++;
	}

	dest[strLen] = '\0';
	return (dest);
}

