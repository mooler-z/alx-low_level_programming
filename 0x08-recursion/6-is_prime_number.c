#include "main.h"

int check_modulo(int n, int i);

/**
 * is_prime_number - Entry
 * @n: number to be primed
 * Return: 1 if n is prime else 0
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Wed Mar  8 08:22:59 AM EAT 2023
 * Filename: 6-is_prime_number.c
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_modulo(n, n - 1));
}

/**
 * check_modulo - checks by modulo-ing the number by its preceding numbers
 * @n: number to be primed
 * @i: preceding
 * Return: prime truthy
 */
int check_modulo(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (check_modulo(n, i - 1));
}
