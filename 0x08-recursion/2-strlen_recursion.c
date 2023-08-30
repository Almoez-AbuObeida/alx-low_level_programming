#include "main.h"

/**
*_strlen_recursion - a function that returns the length of a string.
* @s: A string to determain length.
* Return: int.
*/

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		_strlen_recursion(s++);
		i++;
	}

	return (i);
}
