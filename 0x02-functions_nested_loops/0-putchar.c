/**
 * main - Entry
 * Return: 0 (on success)
 * Author: Mulugeta Z
 *
 * Description: printing '_putchar' character by character
 * Created:  Tue Feb 21 02:36:07 PM EAT 2023
 * Filename: 0-putchar.c
 */
int main(void)
{
	char putChars[] = "_putchar";
	int i;

	i = 0;
	while (putChars[i] != '\0')
	{
		_putchar(putChars[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}

