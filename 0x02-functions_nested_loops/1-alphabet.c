#include "main.h"

/**
* print_alphabet - Prints all lowercase alphabet
(*
*Return: nothing
*/
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
