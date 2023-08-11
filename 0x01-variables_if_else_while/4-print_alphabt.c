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
	char c;
	
	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}
	putchar('\n');

	return (0);
}
