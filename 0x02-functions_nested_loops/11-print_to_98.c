#include "main.h"

/**
* print_to_98 - print form any number to 98
* @n: the number to count from
* Return: all numbers from n to 98
*/

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			_putchar((int) n);
			_putchar(',');
			_putchar(' ');
			n++;
		}
	}
	else if (n >= 98)
	{
		while (n >= 98)
		{
			_putchar((int) n);
			_putchar(',');
			_putchar(' ');
			n--;
		}
	}
}
