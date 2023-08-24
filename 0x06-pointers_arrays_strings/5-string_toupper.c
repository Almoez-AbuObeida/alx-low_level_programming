#include "main.h"

/**
* string_toupper - a function that changes all lowercase
* letters of a string to uppercase.
* @s: string.
* Return: @s.
*/

char *string_toupper(char *string)
{
	int i = 0;

	while (string[i] != '\0' && (string[i] >= 'a' && string[i] <= 'z'))
	{
		string[i] = string[i] - ('a' - 'A');
		i++;
	}

	return (string);
}
