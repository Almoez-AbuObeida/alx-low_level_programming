#include <stdio.h>

/**
*main - main function
(*
*Description: This function will print the alphabet in reverse.)
*Return: 0
*/
int main(void)
{
	char n = 'z';

	while (n >= 'a')
	{
		putchar(n);
		n--;
	}
	putchar('\n');

	return (0);
}
