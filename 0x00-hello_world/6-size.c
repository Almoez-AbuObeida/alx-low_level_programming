#include <stdio.h>

/**
*main - main function
(*
*Description: a function prints the size of types
*Return: Return 0
*/
int main(void)
{
	printf("size of  a char: %d byte(s)\n",(int)sizeof(char));
	printf("size of  a int: %d byte(s)\n", (int)sizeof(int));
	printf("size of  a long int: %d byte(s)\n",(int)sizeof(long));
	printf("size of  a long long int: %d byte(s)\n",(int)sizeof(long*long));
	printf("size of  a float: %d byte(s)\n", (int)sizeof(float));
	return (0);
}
