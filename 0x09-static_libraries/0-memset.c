#include "main.h"

/**
* _memset - A function that fills memory with a constant byte.
* @s: A pointer to @b.
* @b: A char to fill a byte.
* @n: The number of bytes.
* Return: @s.
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n--)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
