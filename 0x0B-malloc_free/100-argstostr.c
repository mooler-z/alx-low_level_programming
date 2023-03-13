#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concat all arg
 * @ac: argument count.
 * @av: pointer to ac.
 * Return: NULL if ac is 0 or av is NULL or Pointer to new str.
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Wed Mar 13 05:05:19 PM EAT 2023
 * Filename: 100-argtostr.c
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, size;
	char *arg;

	size = 0;
	k = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			size++;
			j++;
		}
		size++;
		i++;
	}
	arg = malloc((sizeof(char) * size) + 1);
	if (arg == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			arg[k] = av[i][j];
			j++;
			k++;
		}
		arg[k] = '\n';
		k++;
		i++;
	}
	arg[k] = '\0';
	return (arg);
}
