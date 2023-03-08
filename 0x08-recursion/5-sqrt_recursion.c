#include "main.h"

int guess_the_integer(int n, int i);

/**
 * _sqrt_recursion - Entry
 * @n: number to be squared root of
 * Return: squared root of a number
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Wed Mar  8 07:59:00 AM EAT 2023
 * Filename: 5-sqrt_recursion.c
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (guess_the_integer(n, 0));
}

/**
 * guess_the_integer - since we need a second arg to guess the
 * sqrRoot of a number, I created this function
 * @n: the squared number
 * @i: guess a the number starting from i
 * Return: the guessed number
 */
int guess_the_integer(int n, int i)
{
	if (i * i > n)
		return (-1);
	if ((i * i) == n)
		return (i);
	return (guess_the_integer(n, i + 1));
}
