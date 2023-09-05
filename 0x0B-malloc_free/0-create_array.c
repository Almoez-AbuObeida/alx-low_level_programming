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
	int j = size;
	char *s = malloc(sizeof(char) * 10);
	int i = 0;

	if (size == 0)
	{
		s = NULL;
	}
	else
	{
		while (i < j)
		{
			s[i] = c;
		}
		return (s);
	}
	
	return (s);
	free(s);
}
