#include "main.h"

/**
* print_sign - print the sgin of the number
(*
* @n: the number that will be checked
* Return: 1 if positive, -1 if negative, and 0 if zero
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
