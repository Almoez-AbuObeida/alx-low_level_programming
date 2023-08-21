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

	while (s[i] != '\0')
	{
		i++;
	}
	while (j < i - 2)
	{
		char temp = s[j];
		s[j] = s[i - 1];
		s[i - 1] = temp;
		j++;
		i--;
	}
	_putchar('\n');
}
