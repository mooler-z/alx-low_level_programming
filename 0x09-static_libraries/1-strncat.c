#include "main.h"

/**
 * _strncat - Entry
 * @dest: dest string
 * @src: src string
 * @n: number of bytes
 * Return: pointer to the result
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Thu Mar  2 04:07:23 PM EAT 2023
 * Filename: 1-strncat.c
 */
char *_strncat(char *dest, char *src, int n)
{
	int strLen, looper;

	strLen = 0;
	looper = 0;

	while (dest[strLen] != '\0')
		strLen++;

	while (src[looper] != '\0' && looper < n)
	{
		dest[strLen] = src[looper];
		looper++;
		strLen++;
	}

	dest[strLen] = '\0';
	return (dest);
}

