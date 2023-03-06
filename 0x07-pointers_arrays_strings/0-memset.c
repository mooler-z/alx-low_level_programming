#include "main.h"

/**
 * _memset - Entry
 * @s: memoryE area to be filled
 * @b: char to copy
 * @n: n times to copy
 * Return: pointer to mem area
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Mon Mar  6 01:45:53 PM EAT 2023
 * Filename: 0-memset.c
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int l;

	l = 0;
	for (l = 0; l < n; l++)
		s[l] = b;
	return (s);
}

