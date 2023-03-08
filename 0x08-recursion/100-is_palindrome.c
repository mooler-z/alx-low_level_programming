#include "main.h"

int get_str_length(char *s);
int reverse_and_check(char *s, int i, int len);

/**
 * is_palindrome - Entry
 * @s: string to be palindromed
 * Return: palindrome truthy
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Wed Mar  8 08:32:35 AM EAT 2023
 * Filename: 100-is_palindrome.c
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (reverse_and_check(s, 0, get_str_length(s)));
}

/**
 * get_str_length - get length of string so to check the reverse of string
 * @s: string to check its length
 * Return: length of string s
 */
int get_str_length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + get_str_length(s + 1));
}

/**
 * reverse_and_check - check normal and reversed str if equal
 * @s: orginal string to be checked
 * @i: looper, of sorts
 * @len: length of string s
 * Return: palindrome truthy
 */
int reverse_and_check(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (reverse_and_check(s, i + 1, len - 1));
}
