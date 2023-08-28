#include "main.h"

/**
* _memset - A function that fills memory with a constant byte.
* @s: A pointer to @b.
* @b: A char to fill a byte.
* @n: The number of bytes.
* Return: @s.
*/
char *_memset(char *s, char b, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
