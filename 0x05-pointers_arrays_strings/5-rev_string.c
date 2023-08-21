#include "main.h"

/**
* rev_string - A function that reverses a string.
* @s: A string.
* Return: Nothing.
*/

void rev_string(char *s)
{
	int i = 0;
	int j, k;

	while (s[i] != '\0')
	{
		i++;
	}
	for (k = *i; k > 0; k--)
	{
		for (j = 0; j < i; j++)
		{
			char a = s[j];
			char b = s[j + 1];

			s[j] = b;
			s[j + 1] = a;
		}
	}
	_putchar('\n');
}
