#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments passed to the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Mon Mar 10 07:33:11 PM EAT 2023
 * Filename: 1-args.c
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
