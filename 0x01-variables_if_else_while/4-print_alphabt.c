#include <stdio.h>

/**
*main - main function
(*
*Description: This function will print all the alphabet
*letters except e and q)
*Return: 0
*/
int main(void)
{
	char n = 'a';

	while (n <= 'z' && n != 'q' && n != 'e')
	{
		putchar(n);
		n++;
	}

	putchar('\n');

	return (0);
}
