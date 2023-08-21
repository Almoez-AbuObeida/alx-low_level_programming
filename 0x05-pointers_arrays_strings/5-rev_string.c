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
	char *ss = &s;
	while (s[i] != '\0')
	{
		i++;
	}
	while (i > 0)
	{
		ss[i - 1] = *s[j];
		i--;
	}
	_putchar('\n');
}
