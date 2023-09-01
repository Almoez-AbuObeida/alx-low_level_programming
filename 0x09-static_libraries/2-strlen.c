#include "main.h"

/**
* _strlen - A function that returns the length of a string.
* @s: A string
* Return: The length of the string.
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
