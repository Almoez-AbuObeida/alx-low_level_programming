#include <stdio.h>

/**
*main - main function
(*
*Description: This function is going to print the alphabet twois,
*one with lower case and ones with upper case)
*Return: 0
*/
int main(void)
{
	char n = 'a';
	char N = 'A';
	
	while (n <= 'z')
	{
		putchar(n);
	}

	while (N <= 'Z')
	{
		putchar(N);
	}

	return (0);
}
