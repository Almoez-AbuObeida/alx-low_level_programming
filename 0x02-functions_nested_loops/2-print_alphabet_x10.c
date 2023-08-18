#include "main.h"

/**
*print_alphabet_x10 - prints lowercase alphabet 10 times
(*
*Return: Alphabet 10 times
*/
void print_alphabet_x10(void)
{
	char c = 'a';
	int counter = 5;
	while (counter < 5)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		putchar('\n');
		counter++;
	}
}
