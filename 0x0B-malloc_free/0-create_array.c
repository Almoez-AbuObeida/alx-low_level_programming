#include "main.h"

/**
 * create_array - creats an array of chars, and initializes it
 * with a specific char.
 * @size: Size of the string.
 * @c: pointer ot the chars.
 * Return: pointer to chars.
 */

char *create_array(unsigned int size, char c)
{
	int i = 0;
	char *s;

	s = malloc(size);
	if (size == 0)
	{
		s = NULL;
	}
	else
	{
		while (size--)
		{
			s[i] = c;
			i++;
		}
	}

	return (s);
	free(s);
}
