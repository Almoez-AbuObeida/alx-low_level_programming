#include "main.h"

/**
* rev_string - A function that reverses a string.
* @s: A string.
* Return: Nothing.
*/

void rev_string(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i > 0)
	{
		for (j = 0; j < i; j++)
		{
			char a = s[j];
			char b = s[j + 1];

			s[j] = b;
			s[j + 1] = a;
		}
		i--;
	}
	_putchar('\n');
}
