#include "main.h"

/**
* _puts_recursion - a function that prints a string,
* followed by a new line.
* @s: Astring to put.
* Return: void.
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	s++;
}
