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
	while (j < i)
	{
		char temp = s[j]; 
		s[j] = s[i];
		s[i] = temp;
		j++;
		i--;
	} 
	_putchar('\n');
}
