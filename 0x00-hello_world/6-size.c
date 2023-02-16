#include <stdio.h>

int main(void) {
	char charVar;
	int intVar;
	long int longIntVar;
	long long int longLongIntVar;
	float floatVar;

	printf("Size of a char: %d byte(s)\n", sizeof(charVar));
	printf("Size of an int: %d byte(s)\n", sizeof(intVar));
	printf("Size of a long int: %d byte(s)\n", sizeof(longIntVar));
	printf("Size of a long long int: %d byte(s)\n", sizeof(longLongIntVar));
	printf("Size if a float: %d bytes(s)\n", sizeof(floatVar));

	return(0);
}
