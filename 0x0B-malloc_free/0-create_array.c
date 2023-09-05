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
	char *s = malloc(sizeof(char) * size);

	if (size == 0)
	{
		*s == NULL;
	}
	else
	{
		while (*s != '\0')
		{
			*s = c;
			*s++;
		}
	}

	return (s);
	free(s);
}
