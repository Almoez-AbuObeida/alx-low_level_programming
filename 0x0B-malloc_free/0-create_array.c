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
	char str = malloc(sizeof(char) * 10);
	int i = 0;

	if (size == 0)
	{
		str = NULL;
	}
	else
	{
		while (i < j)
		{
			str[i] = c;
			if (str[i] == NULL)
			{
				str = NULL;
			}
		}
	}

	return (str);
}
