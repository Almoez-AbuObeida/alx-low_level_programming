#include "main.h"

/**
* puts_half - A function that prints half of a string.
* @str: A string
* Return: void.
*/

void puts_half(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		for (j = i / 2; str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
	}
	else if (i % 2 != 0)
	{
		int n = (i - 1) / 2;

		while (n < i)
		{
			_putchar(str[n + 1]);
			n++;
		}
	}
	_putchar('\n');
}
