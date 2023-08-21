#include "main.h"

/**
* rev_string - A function that reverses a string.
* @s: A string.
* Return: Nothing.
*/

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char *str;

	while (s[i] != '\0')
	{
		str[j] = s[i];
		i++;
		j++;
	}
	j = 0;

	while (i > 0)
	{
		s[j] = str[i - 1];
		j++;
		i--;
	}
	_putchar('\n');
}
