#include "main.h"

/**
* a function that prints an integer.
* @n: integer.
* Return: nothing
*/
void print_number(int n)
{
	int power = 10;
	int len = 0;
	int i = 1;

	if (n < 0)
		_putchar('-');

	while (n / power != 0)
	{
		len++;
		power *= 10;
	}

	while (i < len)
	{
		_putchar(n / (10 * (len - i)) + 48);
		i++;
	}
}
