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

	printf("size of a char: %zu byte(s)\n", sizeof(c));
	printf("size of an int: %zu byte(s)\n", sizeof(i));
	printf("size of a long int: %zu byte(s)\n", sizeof(l));
	printf("size of a long long int: %zu byte(s)\n", sizeof(o));
	printf("size of a float: %zu byte(s)\n", sizeof(f));
	return (0);
}
