#include "main.h"

/**
* print_rev - A function that prints a string, in reverse,
* followed by a new line.
* @s: A string.
* Return: Nothing.
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i > 0)
	{
		_putchar(s[i - 1]);
		i--;
	}
	_putchar('\n');
}
