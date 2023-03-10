#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Mon Mar 10 07:28:19 PM EAT 2023
 * Filename: 0-whatsmyname.c
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
