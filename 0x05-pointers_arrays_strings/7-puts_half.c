#include "main.h"

/**
* puts_half - A function that prints half of a string.
* @str: A string
* Return: void.
*/

void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 0)
	{
		int n = i / 2;

		while (n < i)
		{
			_putchar(str[n]);
			n++;
		}
	}
	else if (i % 2 != 0)
	{
		int n = (i - 1) / 2;

		while (n < (i - 1))
		{
			_putchar(str[n + 1]);
			n++;
		}
	}
	_putchar('\n');
}
