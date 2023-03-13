#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copy string str
 * @str: string to clone
 *
 * Return: pointer to a new string else NULL
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Wed Mar 13 03:17:02 PM EAT 2023
 * Filename: 0-strdup.c
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	while ((dup[i] = str[i]) != '\0')
		i++;

	return (dup);
}
