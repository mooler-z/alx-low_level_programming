#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars and initiliaze
 * @size: size of the new arr
 * @c: array intializer char
 *
 * Return: pointer to the array else NULL
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Wed Mar 13 03:04:52 PM EAT 2023
 * Filename: 0-create_array.c
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	while (i < size)
	{
		*(p + i) = c;
		i++;
	}

	*(p + i) = '\0';

	return (p);
}
