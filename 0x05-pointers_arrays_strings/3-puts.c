#include "main.h"

/**
* _puts - A function that prints a string.
* @str: A string.
* Return: Nothing.
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
