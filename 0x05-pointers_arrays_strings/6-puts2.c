#include "main.h"

/**
* puts2 - a function that prints every other character of a string.
* @str: string
* Return: void
*/

void puts2(char *str)
{
	int i, j;

	while (str[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
