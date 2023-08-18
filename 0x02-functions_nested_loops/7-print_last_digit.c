#include "main.h"

/**
* print_last_digit - print the last digit of a text
(*
* @c: the character
* Return: character
*/

int print_last_digit(int c)
{
	int n = abs(c % 10);

	_putchar(n + 48);

	return (n);
}
