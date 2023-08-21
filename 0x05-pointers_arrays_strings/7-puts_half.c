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

		while (n < i && str[n] != '\0')
		{
			_putchar(str[n]);
			n++;
		}
	}
	else
	{
		int n = (i - 1) / 2;

		while (n < i && str[n] != '\0')
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}
