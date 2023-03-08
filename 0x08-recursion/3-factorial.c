#include "main.h"

/**
 * factorial - Entry
 * @n: how many numbers in
 * Return: the resulting integer
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Wed Mar  8 07:56:27 AM EAT 2023
 * Filename: 3-factorial.c
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

