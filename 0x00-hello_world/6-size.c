#include <stdio.h>

/**
*main - main function
(*
*Description: a function prints the size of types
*Return: Return 0
*/
int main(void)
{
	int i;
	char c;
	long l;
	double o;
	float f;

	printf("Size of a char: %d byte(s)\n", sizeof(c));
	printf("Size of an int: %d byte(s)\n", sizeof(i));
	printf("Size of a long int: %d byte(s)\n", sizeof(l));
	printf("Size of a long long int: %d byte(s)\n", sizeof(o));
	printf("Size of a float: %d byte(s)\n", sizeof(f));
	return (0);
}
