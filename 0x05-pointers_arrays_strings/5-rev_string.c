#include "main.h"

/**
 * rev_string - Entry
 * @s: string to be reversed
 * Return: void
 * Author: Mulugeta Z
 *
 * Description:
 * Created:  Mon Feb 27 02:17:43 PM EAT 2023
 * Filename: 5-rev_string.c
 */
void rev_string(char *s)
{
	int looper, counter, reverser;
	char tempCharacter;

	counter = 0;
	for (; s[counter] != '\0'; counter++)
	{}

	reverser = counter - 1;
	for (looper = 0; looper < (counter / 2); looper++)
	{
		tempCharacter = s[looper];
		s[looper] = s[reverser];
		s[reverser] = tempCharacter;
		reverser--;
	}
}

