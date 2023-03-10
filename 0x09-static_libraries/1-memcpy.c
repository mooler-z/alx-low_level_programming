#include "main.h"

/**
 * _memcpy - Entry
 * @dest: dest mem area
 * @src: src mem area
 * @n: num of bytes to copy
 * Return: pointer to destination
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Mon Mar  6 02:17:12 PM EAT 2023
 * Filename: 1-memcpy.c
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		dest[m] = src[m];
	}
	return (dest);
}

